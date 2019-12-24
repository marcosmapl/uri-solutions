/*
URI Online Judge | 1133
Rest of a Division
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1133

Timelimit: 1

Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3.

Input
The input file contains 2 any positive integers, not necessarily in ascending order.

Output
Print all numbers according to above description, always in ascending order.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 298 Bytes
@submission 12/10/19, 12:22:03 PM
*/
#include <stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }
    
    for (++a;a < b;a++)
        if ((a % 5 == 2) || (a % 5 == 3))
            printf("%d\n", a);
    
    return 0;
}