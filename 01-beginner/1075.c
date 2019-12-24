/*
URI Online Judge | 1075
Remaining 2
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1075

Timelimit: 1

Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.

Input
The input is an integer N (N < 10000)

Output
Print all numbers between 1 and 10000, which divided by n will give the rest = 2, one per line.

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
    for (;i < 10000; i++) {
        if (i % n == 2)
            printf("%hd\n", i);
    }

    return 0;
}