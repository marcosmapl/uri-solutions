/*
URI Online Judge SQL | 2617
Provider Ajax SA
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2617

Timelimit: 1

The financial sector has encountered some problems in the delivery of one of our providers, the delivery of the products does not match the invoice.

Your job is to display the name of the products and the name of the provider, for the products supplied by the provider 'Ajax SA'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 109 Bytes
@submission 12/13/19, 11:32:56 PM
*/
select p.name, f.name
from products p 
join providers f on p.id_providers = f.id
where f.name = 'Ajax SA';