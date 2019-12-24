/*
URI Online Judge SQL | 2739
Payday
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2739

Timelimit: 1

The Central Bank of Financing lost many registers after a server failure that happened last October. The collection dates for the parcels where lost.

The bank requested your help to select the names and day of month in which each client must pay theirs parcel.

OBS: The day of month must be an integer.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 79 Bytes
@submission 12/14/19, 12:11:11 AM
*/
select l.name, cast(extract(DAY from l.payday) as integer) as day
from loan l;