/*
URI Online Judge | 1070
Six Odd Numbers
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1070

Timelimit: 1

Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.

Input
The input will be a positive integer value.

Output
The output will be a sequence of six odd numbers.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 245 Bytes
@submission 12/7/19, 2:05:44 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n;
    unsigned char c = 0;
    scanf("%d", &n);
    if (n % 2 == 0)
        n++;
        
    for (; c < 6; c++) {
        printf("%d\n", n);
        n += 2;
    }
    return 0;
}