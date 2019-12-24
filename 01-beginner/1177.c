/*
URI Online Judge | 1177
Array Fill II
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1177

Timelimit: 1

Write a program that reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times, like as the example below.

Input
The input contains an integer number T (2 ≤ T ≤ 50).

Output
For each position of the array N, print "N[i] = x", where i is the array position and x is the number stored in that position.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 299 Bytes
@submission 12/22/19, 5:51:57 PM
*/
#include <stdio.h>

int main()
{
    unsigned char n[1000], t, v;
    unsigned short i;
    
    scanf("%hhu", &t);
    for (i = 0, v = 0; i < 1000; i++, v++) {
        if (v == t)
            v = 0;
        n[i] = v;
        printf("N[%hu] = %hhu\n",i,v);
    }
    
    return 0;
}