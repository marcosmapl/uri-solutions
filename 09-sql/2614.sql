/*
URI Online Judge SQL | 2614
September rentals
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2614

Timelimit: 1

The video store is making its semi-annual report and needs your help. All you have to do is select the name of the clients and the date of rental, from the rentals made in September 2016.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 182 Bytes
@submission 12/13/19, 10:58:09 AM
*/
SELECT c.name, r.rentals_date 
FROM customers c JOIN rentals r ON c.id = r.id_customers
WHERE EXTRACT (month FROM r.rentals_date) = 9 AND EXTRACT (year FROM r.rentals_date) = 2016;