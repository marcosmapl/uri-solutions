/*
URI Online Judge SQL | 2746
Viruses
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2746

Timelimit: 1

Viruses are evolving, but new research has proven that by switching some proteins the vaccine becomes unbeatable. The protein H1(Hemagglutinin) when replaced by the X protein (Xenomorphina) has interesting effects against almost every viral disease. Some conspiracists say that after the vaccine’s discovery some strange 3 meters tall creatures were found in the surroundings of the laboratories, but this is clearly a lie.

Therefore, you must replace every string “H1”( Hemagglutinin ) by 'X' ( Xenomorphina ).

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.002s
@size 52 Bytes
@submission 12/14/19, 12:50:43 AM
*/
select replace(name, 'H1', 'X') as name
from virus;