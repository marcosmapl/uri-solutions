/*
URI Online Judge SQL | 2615
Expanding the Business
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2615

Timelimit: 1

The video store company has the objectives of creating several franchises spread throughout Brazil. For this we want to know in which cities our customers live.

For you to help us select the name of all the cities where the rental company has clients. But please do not repeat the name of the city.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 38 Bytes
@submission 12/13/19, 11:01:02 AM
*/
SELECT DISTINCT city FROM customers;