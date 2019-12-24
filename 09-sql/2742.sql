/*
URI Online Judge SQL | 2742
Richard's Multiverse
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2742

Timelimit: 1

Richard is a famous scientist because of his multiverse theory, where he describes every hypothetical set of parallel universes by means of a database. Thanks to that you now have a job..

As your first task, you must select every Richard from dimensions C875 and C774, together with its existence probability (the famous factor N) with three decimal places of precision.

Remember that the N factor is calculated by multiplying the omega value by 1,618. The data must be sorted by the least omega value.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.004s
@size 202 Bytes
@submission 12/14/19, 12:37:50 AM
*/
select l.name, round((l.omega*1.618),3) as "Fator N"
from life_registry l
join dimensions d on l.dimensions_id = d.id
where d.name in ('C875','C774') and l.name like 'Richard%'
order by l.omega asc;