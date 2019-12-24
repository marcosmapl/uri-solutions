/*
URI Online Judge SQL | 2604
Under 10 or Greater Than 100
Paulo R. Rodegheri BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2604

Timelimit: 1

The financial sector of the company needs a report that shows the ID and the name of the products whose price is less than 10 or greater than 100.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 62 Bytes
@submission 12/13/19, 9:42:36 AM
*/
select id, name from products where price < 10 or price > 100;