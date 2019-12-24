/*
URI Online Judge SQL | 2618
Imported Products
Paulo R. Rodegheri BR Brasil

Timelimit: 1
Our company's import sector needs a report on the import of products from our Sansul providers.

Your task is to display the name of the products, the name of the supplier and the name of the category, for the products supplied by the supplier 'Sansul SA' and whose category name is 'Imported'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 187 Bytes
@submission 12/13/19, 11:36:28 PM
*/
select p.name, f.name, c.name
from products p
join providers f on p.id_providers = f.id
join categories c on p.id_categories = c.id
where f.name = 'Sansul SA' and c.name = 'Imported';