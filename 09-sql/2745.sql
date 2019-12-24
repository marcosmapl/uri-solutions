/*
URI Online Judge SQL | 2745
Taxes
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2745

Timelimit: 1

You are going to the International Personal Tax meeting and your proposal is: every individual with income higher than 3000 must pay a tax to the government, which is 10% of his/her income.

Show the name and the tax value of each person who earns more than 3000, with two decimal places of precision.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 77 Bytes
@submission 12/14/19, 12:48:24 AM
*/	
select name, round((salary*0.10),2) as tax
from people
where salary > 3000;