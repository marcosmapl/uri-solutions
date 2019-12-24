/*
URI Online Judge SQL | 2737
Lawyers
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2737

Timelimit: 1

The manager of Mangojata Lawyers requested a report on the current lawyers.

The manager wants you to show him the name of the lawyer with the most clients, the one with the fewest and the client average considering all lawyers.

OBS: Before presenting the average, show a field called Average to make the report more readable. The average must be presented as an integer.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 279 Bytes
@submission 12/13/19, 11:59:46 AM
*/
(SELECT l.name, l.customers_number 
from lawyers l
where l.customers_number in ((select max(customers_number) from lawyers),(select min(customers_number) from lawyers))
order by l.customers_number DESC)
UNION ALL
(select 'Average', round(avg(customers_number)) from lawyers)