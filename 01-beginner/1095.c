/*
URI Online Judge | 1095
Sequence IJ 1
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1095

Timelimit: 1

Make a program that prints the sequence like the following example.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 186 Bytes
@submission 12/8/19, 8:08:05 AM
*/
#include <stdio.h>

int main(void) {
    int i = 1,j = 60;
    do {
        printf("I=%d J=%d\n",i,j);
        i += 3;
        j -= 5;
    } while (j>=0);
    
    return 0;
}