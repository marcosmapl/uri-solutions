/*
URI Online Judge SQL | 2619
Super Luxury
Paulo R. Rodegheri BR Brasil

Timelimit: 1
Our company is looking to make a new contract for the supply of new super luxury products, and for this we need some data of our products.

Your job is to display the name of the products, the name of the providers and the price, for the products whose price is greater than 1000 and its category is' Super Luxury.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 188 Bytes
@submission 12/13/19, 11:38:47 PM
*/
select p.name, f.name, p.price
from products p
join providers f on p.id_providers = f.id
join categories c on p.id_categories = c.id
where p.price > 1000 and c.name = 'Super Luxury';