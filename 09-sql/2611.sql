/*
URI Online Judge SQL | 2611
Action Movies
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2611

Timelimit: 1

A video store contractor hired her services to catalog her movies. They need you to select the code and the name of the movies whose description of the genre is 'Action'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 113 Bytes
@submission 12/13/19, 10:26:31 AM
*/
SELECT m.id, m.name 
FROM movies AS m INNER JOIN genres AS g ON m.id_genres = g.id 
WHERE g.description = 'Action';