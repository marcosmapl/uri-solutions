/*
URI Online Judge SQL | 2603
Customer Address
Paulo R. Rodegheri BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2603

Timelimit: 1

The company will make an event celebrating the 20th anniversary of the market, and for that we will make a great celebration in the city of Porto Alegre. We also invite all our customers who are enrolled in this city.

Your job is in having the names and addresses of customers who live in 'Porto Alegre', to deliver the invitations personally.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 63 Bytes
@submission 12/13/19, 9:38:54 AM
*/
select name, street from customers where city = 'Porto Alegre';