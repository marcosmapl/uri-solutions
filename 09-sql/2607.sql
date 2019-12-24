/*
URI Online Judge SQL | 2607
Providers' City in Alphabetical Order
Paulo R. Rodegheri BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2607

Timelimit: 1

Every month the company asks for a report from the cities that providers are registered. So, do a query that returns all the cities of the providers, but in alphabetical order.

OBS: You must not show repeated cities.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 54 Bytes
@submission 12/13/19, 9:58:37 AM
*/
SELECT DISTINCT city 
FROM providers 
ORDER BY city ASC;