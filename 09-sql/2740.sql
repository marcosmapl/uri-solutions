/*
URI Online Judge SQL | 2740
League
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2740

Timelimit: 1

The International Underground Excavation League is a success between alternative sports, however the staff responsible for organizing the events doesn’t understand computers at all, they only know how to dig and the sport rule set. As such, you were hired to solve the League’s problem.

	Select the three first placed with the initial phrase "Podium: " and select the last two, which will be demoted to a lower league with the initial phrase “Demoted:".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.006s
@size 226 Bytes
@submission 12/14/19, 12:27:34 AM
*/
(select format('Podium: %s', team) as name
from league
limit 3)
UNION ALL
(WITH t AS (SELECT team, position FROM league ORDER BY position DESC LIMIT 2)
 SELECT format('Demoted: %s', t.team) FROM t ORDER BY t.position ASC)