/*
URI Online Judge | 1178
Array Fill III
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/runs/code/16717800

Timelimit: 1

Read a number X. Put this X at the first position of an array N [100]. In each subsequent position (1 up to 99) put half of the number inserted at the previous position, according to the example below. Print all the vector N.

Input
The input contains a double precision number with four decimal places.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position. Each number of N[...] must be printed with 4 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 289 Bytes
@submission 12/22/19, 5:57:47 PM
*/
#include <stdio.h>

int main()
{
    double n[100];
    unsigned short i;
    
    scanf("%lf", &n[0]);
    printf("N[0] = %.4lf\n", n[0]);
    for (i = 1; i < 100; i++) {
        n[i] = (n[i-1] / 2.0);
        printf("N[%hu] = %.4lf\n", i, n[i]);
    }
    
    return 0;
}