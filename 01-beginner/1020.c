/*
URI Online Judge | 1020
Age in Days
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1020

Timelimit: 1

Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

Input
The input file contains 1 integer value.

Output
Print the output, like the following example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 338 Bytes
@submission 5/23/18, 9:10:20 AM
*/
#include <stdio.h>
 
int main() {
 
    unsigned int day, month, year;
    
    scanf("%u", &day);
    year = day / 365;
    day -= (year * 365);
    
    month = day / 30;
    day -= (month * 30);
    
    printf("%u ano(s)\n", year);
    printf("%u mes(es)\n", month);
    printf("%u dia(s)\n", day);
 
    return 0;
}