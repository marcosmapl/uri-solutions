/*
URI Online Judge | 1116
Dividing X by Y
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1116

Timelimit: 2

Write a program that read two numbers X and Y and print the result of dividing the X by Y. If it's not possible, print the message "divisao impossivel".

Input
The input contains an integer number N. This N is the quantity of pairs of integer numbers X and Y read (dividend and divisor).

Output
For each test case print the result of this division with one digit after the decimal point, or “divisao impossivel” if it isn't possible to perform the calculation.

Obs.: Be carefull. The division between two integers in some languages generates another integer. Use cast:)

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.004s
@size 327 Bytes
@submission 12/10/19, 9:03:12 AM
*/
#include <stdio.h>

int main()
{
    unsigned int n;
    int a,b;
    
    scanf("%u", &n);
    while (n--) {
        scanf("%d %d", &a,&b);
        if (b) {
            printf("%.1lf\n", ((double)a)/((double)b));
        } else {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}