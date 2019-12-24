/*
URI Online Judge SQL | 2606
Categories
Paulo R. Rodegheri BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2606

Timelimit: 1

When the data were migrated to the database, there was a small misunderstanding on the DBA.

Your boss needs you to select the ID and the name of the products, whose categorie name start with 'super'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 149 Bytes
@submission 12/13/19, 9:51:57 AM
*/
select products.id, products.name 
from products 
inner join categories on products.id_categories = categories.id 
where categories.name like 'super%'; 