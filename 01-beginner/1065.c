/*
URI Online Judge | 1065
Even Between five Numbers
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1065

Timelimit: 1

Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 251 Bytes
@submission 12/7/19, 1:54:04 PM
*/
#include <stdio.h>

int main()
{
    int n;
    unsigned char c = 0,i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            c++;
        }
    }
    printf("%d valores pares\n", c);
    return 0;
}