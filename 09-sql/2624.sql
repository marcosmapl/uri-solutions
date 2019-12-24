/*
URI Online Judge SQL | 2624
Number of Cities per Customers
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2624

Timelimit: 1

The company board asked you for a simple report on how many cities the company has already reached.

To do this you must display the number of distinct cities in the customers table.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 48 Bytes
@submission 12/13/19, 11:55:33 PM
*/
select count(distinct c.city)
from customers c;