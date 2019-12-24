/*
URI Online Judge SQL | 2605
Executive Representatives
Paulo R. Rodegheri BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2605

Timelimit: 1

The financial sector needs a report on the providers of the products we sell. The reports include all categories, but for some reason, providers of products whose category is the executive, are not in the report.

Your job is to return the names of the products and providers whose category ID is 6.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 145 Bytes
@submission 12/13/19, 9:48:42 AM
*/
SELECT products.name, providers.name 
FROM products 
INNER JOIN providers ON products.id_providers = providers.id 
WHERE products.id_categories = 6;