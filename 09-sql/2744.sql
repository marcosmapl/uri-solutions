/*
URI Online Judge SQL | 2744
Passwords
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2744

Timelimit: 1

You were hired to be the consultant for a company. Analyzing the database, you noticed that the passwords are stored as text files and, as everyone knows, this is a terrible security practice as they are not encrypted.

Therefore you must convert every password to the MD5 format. Show the client id, the password before conversion and the new MD5.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 56 Bytes
@submission 12/14/19, 12:46:18 AM
*/
select id, password, md5(password) as MD5
from account;