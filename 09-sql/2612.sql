/*
URI Online Judge SQL | 2612
The Actors Silva
Paulo R. Rodegheri BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2612

Timelimit: 1

Once actors win big awards and recognition in the film world, the demand for films in which they participate increases. So we want to know what movies the brothers Silva have in our catalog.

To do this, select the code and the name of the movies in which the actors 'Marcelo Silva' or 'Miguel Silva' acted and that the genre of the film is 'Action'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 267 Bytes
@submission 12/13/19, 10:44:51 AM
*/
SELECT DISTINCT m.id, m.name 
FROM movies m 
    JOIN movies_actors m_a ON m.id = m_a.id_movies 
    JOIN actors a ON a.id = m_a.id_actors 
    JOIN genres g ON g.id = m.id_genres 
WHERE a.name IN ('Miguel Silva','Marcelo Silva') AND g.description = 'Action';   