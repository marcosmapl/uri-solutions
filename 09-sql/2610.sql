/*
URI Online Judge SQL | 2610
Average Value of Products
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2610

Timelimit: 1

In the company that you work is being done a survey on the values of the products that are marketed.

To help the industry that is doing this survey you should calculate and display the average value of the price of the products.

OBS: Show the value with two numbers after the period.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 56 Bytes
@submission 12/13/19, 10:18:33 AM
*/
 SELECT cast(avg(price) AS DECIMAL(10,2)) FROM products;