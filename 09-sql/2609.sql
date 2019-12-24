/*
URI Online Judge SQL | 2609
Products by Categories
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2609

Timelimit: 1

As usual the sales industry is doing an analysis of how many products we have in stock, and you can help them.

Then your job will display the name and amount of products of each category.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 148 Bytes
@submission 12/13/19, 10:10:44 AM
*/
SELECT categories.name, sum(products.amount) 
FROM categories 
INNER JOIN products ON categories.id = products.id_categories 
GROUP BY categories.name;