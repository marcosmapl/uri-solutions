/*
URI Online Judge | 1060
Positive Numbers
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1060

Timelimit: 1
Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 241 Bytes
@submission 12/7/19, 1:49:28 PM
*/
#include <stdio.h>

int main()
{
    double n;
    unsigned char c = 0,i;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &n);
        if (n > 0)
            c++;
    }
    printf("%d valores positivos\n", c);
    return 0;
}