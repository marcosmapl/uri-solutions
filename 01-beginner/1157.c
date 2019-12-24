/*
URI Online Judge | 1157
Divisors I
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1157

Timelimit: 1

Read an integer N and compute all its divisors.

Input
The input file contains an integer value.

Output
Write all positive divisors of N, one value per line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 231 Bytes
@submission 12/11/19, 3:35:16 AM
*/
#include <stdio.h>

int main()
{
    int n;
    unsigned int div = 1;
    
    scanf("%d", &n);
    
    do {
        if (n % div == 0)
            printf("%d\n", div);
    } while (div++ < n);
    
    return 0;
}