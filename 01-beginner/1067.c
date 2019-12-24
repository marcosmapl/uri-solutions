/*
URI Online Judge | 1067
Odd Numbers
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1067

Timelimit: 1

Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

Input
The input will be an integer value.

Output
Print all odd values between 1 and X, including X if is the case.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 166 Bytes
@submission 12/7/19, 2:01:04 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n, i = 1;
    scanf("%d", &n);
    for (; i <= n; i+=2) {
        printf("%d\n", i);
    }
    return 0;
}