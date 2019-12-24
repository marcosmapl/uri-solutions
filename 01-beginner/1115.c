/*
URI Online Judge | 1115
Quadrant
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1115

Timelimit: 1

	Write a program to read the coordinates (X, Y) of an indeterminate number of points in Cartesian system. For each point write the quadrant to which it belongs. The program finish when at least one of two coordinates is NULL (in this situation without writing any message).

Input
The input contains several tests cases. Each test case contains two integer numbers.

Output
For each test case, print the corresponding quadrant which these coordinates belong, as in the example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 461 Bytes
@submission 12/8/19, 10:10:35 AM
*/
#include <stdio.h>

int main(void) {
    int a,b;

    scanf("%d %d", &a, &b);
    while (a && b) {
        if (a > 0) {
            if (b > 0)
                printf("primeiro\n");
            else
                printf("quarto\n");
        } else {
            if (b > 0)
                printf("segundo\n");
            else
                printf("terceiro\n");
        }
        scanf("%d %d", &a, &b);
    }
        
    return 0;
}