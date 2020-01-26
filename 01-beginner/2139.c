/*
URI Online Judge | 2139
Pedrinho's Christmas
By Joao Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2139

Timelimit: 1
Pedrinho is a boy who loves family parties, especially Christmas, when he wins gifts from his parents and grandparents. This year, his father promised him a PS4, but only if Pedrinho could solve some challenges throughout the year, one of them, writing a program that calculates how many days are left until Christmas.

However, Pedrinho is only 9 years old and knows nothing about programming, but he knows that you, his cousin, mess with "computer stuff" and thus, he asked you to write the program for him. Not only that, but he promised to let you play every weekend and for how long you would like to.

Input
The input consists of several test cases. Each line contains the month and the day of the year 2016 (leap year). Read input until EOF.

Output
If it's Christmas, print "E natal!"; if it's Christmas Eve, print "E vespera de natal!"; if it has already passed, print "Ja passou!". Otherwise, print "Faltam X dias para o natal!", being X the number of days left until Christmas.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 715 Bytes
@submission 1/23/20, 8:54:28 PM
*/
#include <stdio.h>

int main()
{
    unsigned short m, d, i, l;
    unsigned char month_days[11] = {31,29,31,30,31,30,31,31,30,31,30};

    while (scanf("%hu %hu", &m, &d) != EOF) {
        m--;
        if (m < 11) {
            for (i = 0, l = 360; i < m; i++) {
                l -= month_days[i];
            }
            printf("Faltam %hu dias para o natal!\n", l-d);
        } else if (d < 24) {
            printf("Faltam %hu dias para o natal!\n", 25-d);
        } else  if (d == 24) {
            printf("E vespera de natal!\n");
        } else  if (d > 25) {
            printf("Ja passou!\n");
        } else {
            printf("E natal!\n");
        }
    }

    return 0;
}