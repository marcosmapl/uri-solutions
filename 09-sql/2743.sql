/*
URI Online Judge SQL | 2743
Number of Characters
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2743

Timelimit: 1

The Global Organization of Characters at People’s Names (GOCPN) made a census to figure how many characters people have in theirs names.

To help OMCNP, you must show the number of characters of each name sorted by decreasing number of characters.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 76 Bytes
@submission 12/14/19, 12:44:20 AM
*/
select name, char_length(name) as length
from people
order by length desc;