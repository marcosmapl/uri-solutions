/*
URI Online Judge | 1143
Squared and Cubic
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1143

Timelimit: 1

Write a program that reads an integer N (1 < N < 1000). This N is the number of output lines printed by this program.

Input
The input file contains an integer N.

Output
Print the output according to the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 205 Bytes
@submission 12/10/19, 12:41:30 PM
*/
#include <stdio.h>

int main()
{
    unsigned int l, n=1;
    
    scanf("%u", &l);
    while (l--) {
        printf("%u %u %u\n", n, (n*n), (n*n*n));
        n++;
    }
    
    return 0;
}