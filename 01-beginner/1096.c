/*
URI Online Judge | 1096
Sequence IJ 2
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1096

Timelimit: 1

Make a program that prints the sequence like the following exemple.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 207 Bytes
@submission 12/8/19, 8:11:37 AM
*/
#include <stdio.h>

int main(void) {
    int i = 1,j = 7;
    
    for (;i < 10; i += 2) {
        for (;j>4; j--)
            printf("I=%d J=%d\n",i,j);
        j +=3;
    }
    
    return 0;
}