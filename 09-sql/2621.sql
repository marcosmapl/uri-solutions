/*
URI Online Judge SQL | 2621
Amounts Between 10 and 20
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2621

Timelimit: 1
When it comes to delivering the report on how many products the company has in stock, a part of the report has become corrupted, so the stock keeper asked for help, he wants you to display the following data for him.

Display the name of products whose amount are between 10 and 20 and whose name of the supplier starts with the letter 'P'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 129 Bytes
@submission 12/13/19, 11:47:35 PM
*/
select p.name
from products p
join providers f on p.id_providers = f.id
where f.name LIKE 'P%' and p.amount BETWEEN 10 and 20;