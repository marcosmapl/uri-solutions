/*
URI Online Judge SQL | 2602
Basic Select
Paulo R. Rodegheri BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2602

Timelimit: 1

Your company is doing a survey of how many customers are registered in the states, however, lacked to raise the data of the state of the 'Rio Grande do Sul'.

Then, you must show the names of all customers whose state is 'RS'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 56 Bytes
@submission 12/13/19, 1:39:30 AM
*/
select name from customers where customers.state = 'RS';