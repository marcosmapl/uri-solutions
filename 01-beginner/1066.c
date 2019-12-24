/*
URI Online Judge | 1066
Even, Odd, Positive and Negative
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1066

Timelimit: 1

Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many of these values ​​are even, odd, positive and negative.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 563 Bytes
@submission 12/7/19, 1:58:48 PM
*/
#include <stdio.h>

int main()
{
    int n;
    unsigned char par=0, imp=0, pos=0, neg=0, i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            par++;
        } else {
            imp++;
        }
        if (n > 0) {
            pos++;
        } else if (n < 0) {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}