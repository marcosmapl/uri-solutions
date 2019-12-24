/*
URI Online Judge SQL | 3001
Update sem Where
Gustavo Moraes BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/3001

Timelimit: 1

Your friend Zé Maria is in an ambush because he made an update without a where and end up zeroing all values from the price column. For your luck, the price can be recalculated knowing the product type.

If the product type is equal to A, the price will be 20.0
If the product type is equal to B, the price will be 70.0
If the product type is equal to C, the price will be 530.5
Your job is to show the name and price of all products. You must show the products in groups by the following order: first, all products form type A, second type B, and lastly the type C. Furthermore, the products in each group (A, B, C) must be printed in descending order by ID.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 166 Bytes
@submission 12/14/19, 3:40:50 PM
*/
SELECT p.name,
CASE
    WHEN p.type = 'A' THEN 20.0
    WHEN p.type = 'B' THEN 70.0
    ELSE 530.5
END AS price
FROM products p
ORDER BY p.type asc, p.id desc;