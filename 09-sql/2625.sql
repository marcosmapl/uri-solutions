/*
URI Online Judge SQL | 2625
CPF Validation
Marcos Lima BR Brasil
https://www.urionlinejudge.com.br/judge/en/problems/view/2625

Timelimit: 1

Your company's communications managers want a report on the natural person customer data that is registered in the database. But the old report had a problem. customers CPF data came without validation.

So your job now is to select all the CPFs of all the customers, and apply a mask on the return of the data.

The CPF mask looks like: '000.000.000-00'.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language PostgreSQL (psql 9.4.19)
@time 0.001s
@size 136 Bytes
@submission 12/13/19, 11:27:05 AM
*/
SELECT SUBSTR(cpf, 1, 3) || '.' || SUBSTR(cpf, 4, 3) || '.' ||
SUBSTR(cpf, 7, 3) || '-' || SUBSTR(cpf, 10) AS cpf
FROM natural_person;