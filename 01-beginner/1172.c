/*
URI Online Judge | 1172
Array Replacement I
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1172

Timelimit: 1

Read an array X[10]. After, replace every null or negative number of X ​by 1. Print all numbers stored in the array X.

Input
The input contains 10 integer numbers. These numbers ​​can be positive or negative.

Output
For each position of the array, print "X [i] = x", where i is the position of the array and x is the number stored in that position.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 281 Bytes
@submission 12/22/19, 4:09:58 PM
*/
#include <stdio.h>

int main()
{
    int x;
    unsigned char i = 0;
    
    for (; i < 10; i++) {
        scanf("%d", &x);
        if (x < 1)
            printf("X[%hhu] = 1\n", i);
        else
            printf("X[%hhu] = %d\n", i, x);
    }

    return 0;
}