/*
URI Online Judge | 1164
Perfect Number
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1164

Timelimit: 1

In mathematics, a perfect number is an integer for which the sum of all its own positive divisors (excluding itself) is equal to the number itself. For example the number 6 is perfect, because 1+2+3 is equal to 6. Your task is to write a program that read integer numbers and print a message informing if these numbers are perfect or are not perfect.

Input
The input contains several test cases. The first contains the number of test cases N (1 ≤ N ≤ 100). Each one of the following N lines contains an integer X (1 ≤ X ≤ 108), that can be or not a perfect number.

Output
For each test case print the message “X eh perfeito” (X is perfect) or “X nao eh perfeito” (X isn't perfect) according with to above specification.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.004s
@size 453 Bytes
@submission 12/13/19, 1:23:32 AM
*/
#include <stdio.h>

int main()
{
    unsigned char n;
    unsigned int x, i, soma;
    
    scanf("%hhu", &n);
    
    do {
        scanf("%u", &x);
        soma = 0;
        for (i = 1; i < x; i++)
            if (x % i == 0)
                soma += i;
        
        if (soma != x)
            printf("%d nao eh perfeito\n", x);
        else 
            printf("%d eh perfeito\n", x);
    } while (--n);
    
    return 0;
}