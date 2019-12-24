/*
URI Online Judge SQL | 2613
Cheap Movies
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2613

Timelimit: 1

In the past the studio has made an event where several movies were on sale, we want to know what movies these were.

Your job to help us is to select the ID and name of movies whose price is less than 2.00.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 92 Bytes
@submission 12/13/19, 10:47:12 AM
*/
SELECT m.id, m.name 
FROM movies m 
JOIN prices p ON m.id_prices = p.id 
WHERE p.value < 2.00; 