/*
URI Online Judge | 1132
Multiples of 13
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1132

Timelimit: 1

Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.

Input
The input file contains 2 integer numbers X and Y without any order.

Output
Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 303 Bytes
@submission 12/10/19, 12:17:47 PM
*/
#include <stdio.h>

int main()
{
    int a, b, temp, soma = 0;
    scanf("%d %d", &a, &b);
    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }
    
    for (;a <= b;a++)
        if (a % 13 != 0)
            soma +=a;
    
    printf("%d\n", soma);
    return 0;
}