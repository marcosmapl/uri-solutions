/*
URI Online Judge SQL | 2622
Legal Person
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2622

Timelimit: 1
The sales industry wants to make a promotion for all clients that are legal entities. For this you must display the name of the customers that are legal entity.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 80 Bytes
@submission 12/13/19, 11:49:42 PM
*/
select c.name
from customers c
join legal_person l on c.id = l.id_customers;