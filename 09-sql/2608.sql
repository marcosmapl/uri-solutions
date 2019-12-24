/*
URI Online Judge SQL | 2608
Higher and Lower Price
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2608

Timelimit: 1

The financial sector of our company, wants to know the smaller and higher values of the products, which we sell.

For this you must display only the highest and lowest price of the products table.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 44 Bytes
@submission 12/13/19, 10:01:28 AM
*/
select MAX(price), MIN(price) 
from products;