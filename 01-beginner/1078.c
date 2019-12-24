/*
URI Online Judge | 1078
Multiplication Table
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1078

Timelimit: 1

Read an integer N (2 < N < 1000). Print the multiplication table of N.
1 x N = N      2 x N = 2N        ...       10 x N = 10N  

Input
The input is an integer N (1 < N < 1000).

Output
Print the multiplication table of N., like the following example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 198 Bytes
@submission 12/8/19, 7:41:35 AM
*/
#include <stdio.h>

int main(void) {
    short n, i = 1;

    scanf("%hd", &n);
    for (;i < 11; i++) {
        printf("%hd x %hd = %hd\n", i, n, (i*n));
    }

    return 0;
}