/*
URI Online Judge | 1173
Array fill I
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1173

Timelimit: 1

Read a number and make a program which puts this number in the first position of an array N[10]. In each subsequent position, put the double of the previous position. For example, if the input number is 1, the array numbers ​​must be 1,2,4,8, and so on.

Input
The input contains an integer number V (V < 50).

Output
Print the stored number of each array position, in the form "N[i] = X", where i is the position of the array and x is the stored number at the position i. The first number for X is V.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 217 Bytes
@submission 12/22/19, 4:15:59 PM
*/
#include <stdio.h>

int main()
{
    short x;
    unsigned char i = 0;
    
    scanf("%hd", &x);
    for (; i < 10; i++) {
        printf("N[%hhu] = %hd\n", i, x);
        x *= 2;
    }

    return 0;
}