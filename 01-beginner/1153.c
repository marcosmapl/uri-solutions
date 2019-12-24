/*
URI Online Judge | 1153
Simple Factorial
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1153

Timelimit: 1

Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Input
The input contains an integer value N (0 < N < 13).

Output
The output contains an integer value corresponding to the factorial of N.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 198 Bytes
@submission 12/11/19, 3:02:28 AM
*/
#include <stdio.h>

int main()
{
    unsigned int fat = 1, n;
    
    scanf("%d", &n);
    
    while (n > 0) {
        fat *= n--;
    }
    printf("%d\n", fat);
    
    return 0;
}