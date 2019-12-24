/*
URI Online Judge | 1155
S Sequence
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1155

Timelimit: 1

Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 1/2 + 1/3 + … + 1/100

Input
There is no input in this problem.

Output
The output contains a value corresponding to the value of S.
The value should be printed with two digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 220 Bytes
@submission 12/11/19, 3:21:40 AM
*/
#include <stdio.h>

int main()
{
    unsigned char d = 1;
    double sum = 0.0;
    
    do {
        sum += 1.0 / ((double)d++);
    } while (d < 101);
    
    printf("%.2lf\n", sum);
    
    return 0;
}