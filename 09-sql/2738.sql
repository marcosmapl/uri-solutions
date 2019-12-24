/*
URI Online Judge SQL | 2738
Contest
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2738

Timelimit: 1

The Mars Technology University has Open Positions for researchers. However, the computer responsible for processing the candidates' data is broken. You must present the candidate list, containing the name and final score (with two decimal places of precision) of each candidate. Remember to show the list ordered by score (highest first).

The score is given by the weighted average described as:

Avg=((math∗2)+(specific∗3)+(project_plan∗5))/10

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.003s
@size 173 Bytes
@submission 12/14/19, 12:05:57 AM
*/
select c.name, round((((s.math*2.0) + (s.specific*3.0) + (s.project_plan * 5.0))/10.0),2) as avg
from candidate c
join score s on c.id = s.candidate_id
order by avg DESC;