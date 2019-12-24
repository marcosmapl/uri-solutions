/*
URI Online Judge | 1144
Logical Sequence
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1144

Timelimit: 1

Write a program that reads an integer N. N * 2 lines must be printed by this program according to the example below. For numbers with more than 6 digits, all digits must be printed (no cientific notation allowed).

Input
The input file contains an integer N (1 < N < 1000).

Output
Print the output according to the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 257 Bytes
@submission 12/10/19, 12:44:14 PM
*/
#include <stdio.h>

int main()
{
    unsigned int l, n=1;
    
    scanf("%u", &l);
    while (l--) {
        printf("%u %u %u\n", n, (n*n), (n*n*n));
        printf("%u %u %u\n", n, (n*n)+1, (n*n*n)+1);
        n++;
    }
    
    return 0;
}