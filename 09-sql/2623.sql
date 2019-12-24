/*
URI Online Judge SQL | 2623
Categories with Various Products
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2623

Timelimit: 1

The sales industry needs a report to know what products are left in stock.

To help the sales industry, display the product name and category name for products whose amount is greater than 100 and the category ID is 1,2,3,6 or 9. Show the results in ascendent order by category ID.


@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 149 Bytes
@submission 12/13/19, 11:20:31 AM
*/
select p.name, c.name 
from products p join categories c on p.id_categories = c.id
where p.amount > 100 and c.id in (1,2,3,6,9)
order by c.id ASC;