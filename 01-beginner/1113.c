/*
URI Online Judge | 1113
Ascending and Descending
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1113

Timelimit: 1

Read an undetermined number of pairs of integer values. Write a message for each pair indicating if this two numbers are in ascending or descending order.

Input
The input file contains several test cases. Each test case contains two integer numbers X and Y. The input will finished when X = Y.

Output
For each test case print “Crescente”, if the values X and Y are in ascending order, otherwise print “Decrescente”.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 262 Bytes
@submission 12/8/19, 10:04:10 AM
*/
#include <stdio.h>

int main(void) {
    int a,b;

    do {
        scanf("%d %d", &a, &b);
        if (a > b)
            printf("Decrescente\n");
        if (a < b)
            printf("Crescente\n");
    } while (a != b);
        
    return 0;
}