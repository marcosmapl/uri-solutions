/*
URI Online Judge SQL | 2989
Departments and Divisions
Angelo Brayner BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2989

Timelimit: 1

For each department, show the department name, your divisions' name, with your respective average salary and the highest salary for each division. The result must be ordered in a descending way using the average salary.

Tip: You can use the function COALESCE(check_expression, 0) to substitute some value null for zero; Furthermore, you also can use the function ROUND(value, 2) to show the values with 2 decimal places.

**This problem is being checked, i.e., the input can be modified to better suit all test cases. During this period all submissions to this problem may be re-judged.
**12/24/19 01:37 PM

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Wrong answer(5%)
@language PostgreSQL (psql 9.4.19)
@time 0.007s
@size 862 Bytes
@submission 12/14/19, 2:35:26 PM
*/
with b (matr, nome, valor, dep, div) as 
(
select e.matr, e.nome, v.valor as valor, e.lotacao, e.lotacao_div from empregado e
join emp_venc on e.matr = emp_venc.matr
join vencimento v on emp_venc.cod_venc = v.cod_venc
UNION ALL
select e.matr, e.nome, (d.valor * -1.0) as valor, e.lotacao, e.lotacao_div from empregado e
join emp_desc on e.matr = emp_desc.matr
join desconto d on emp_desc.cod_desc = d.cod_desc
),
a (dep, div, nome, salario) as
(
select dep.nome, div.nome, b.nome, sum(b.valor) as salario from b
join departamento dep on dep.cod_dep = b.dep
join divisao div on div.cod_divisao = b.div
group by dep.nome, div.nome, b.nome
order by dep.nome asc, div.nome asc
)
select dep as departamento, div as divisao, round(avg(salario),2) as media, round(max(salario),2) as maior 
from a
group by departamento, divisao
order by media desc;