/*
URI Online Judge | 1174
Array Selection I
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1174

Timelimit: 1

In this problem, your task is to read an array A[100]. At the end, print all array positions that store a number less or equal to 10 and the number stored in that position.

Input
The input contains 100 numbers. Each number can be integer, floating-point number, positive or negative.

Output
For each number of the array that is equal to 10 or less, print "A [i] = x", where i is the position of the array and x is the number stored in the position, with one digit after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 248 Bytes
@submission 12/22/19, 4:20:45 PM
*/
#include <stdio.h>

int main()
{
    double x;
    unsigned char i = 0;
    
    for (; i < 100; i++) {
        scanf("%lf", &x);
        if (x < 10.00000000000001)
            printf("A[%hhu] = %.1lf\n", i, x);
    }

    return 0;
}