/*
URI Online Judge | 1101
Sequence of Numbers and Sum
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1101

Timelimit: 1

Read an undetermined number of pairs values M and N (stop when any of these values is less or equal to zero). For each pair, print the sequence from the smallest to the biggest (including both) and the sum of consecutive integers between them (including both).

Input
The input file contains pairs of integer values M and N. The last line of the file contains a number zero or negative, or both.

Output
For each pair of numbers, print the sequence from the smallest to the biggest and the sum of these values, as shown below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 441 Bytes
@submission 12/8/19, 10:00:09 AM
*/
#include <stdio.h>

int main(void) {
    int a,b,c=0;

    scanf("%d %d", &a, &b);
    while ((a > 0) && (b > 0)) {
        if (a > b) {
            c = a;
            a = b;
            b = c;
            c = 0;
        }
        
        for (; a<=b; a++) {
            printf("%d ",a);
            c += a;
        }
        printf("Sum=%d\n", c);
        c = 0;
        scanf("%d %d", &a, &b);
    }
    return 0;
}