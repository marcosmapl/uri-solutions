/*
URI Online Judge SQL | 2616
No Rental
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2616

Timelimit: 1

The video store company intends to do a promotion for customers who have not yet done any rental.

Your job is to deliver us the ID and the name of the customers who have not done any rental.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 140 Bytes
@submission 12/13/19, 11:14:01 AM
*/
select c.id, c.name
from customers c left join locations l on c.id = l.id_customers 
group by c.id
having count(l.id) = 0
order by c.id;