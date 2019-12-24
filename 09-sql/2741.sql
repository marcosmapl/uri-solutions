/*
URI Online Judge SQL | 2741
Students' Grades
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2741

Timelimit: 1

The semester is over at South Transylvania University. Every grade was closed, and only Alchemy 104 haven’t published its list of approved students.

Therefore, you should show the word 'Approved: ' alongisde the the name of a student and the grade, for those who have been approved (grade ≥7).

Remember to sort the list by grade (higher grades first).

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 107 Bytes
@submission 12/14/19, 12:30:59 AM
*/
select format('Approved: %s', name) as name, grade
from students
where grade >= 7.0
order by grade desc;