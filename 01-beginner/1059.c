/*
URI Online Judge | 1059
Even Numbers
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1059

Timelimit: 1

Write a program that prints all even numbers between 1 and 100, including them if it is the case.

Input
In this extremely simple problem there is no input.

Output
Print all even numbers between 1 and 100, including them, one by row.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 146 Bytes
@submission 12/7/19, 1:37:49 PM
*/
#include <stdio.h>

int main()
{
    unsigned char i = 2;
    for (; i <= 100; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}