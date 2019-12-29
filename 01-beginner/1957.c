/*
URI Online Judge | 1957
Converting to Hexadecimal
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1957

Timelimit: 1

Data stored in computers are in binary. An economic way of visualizing these numbers is the usage of base 16 (hexadecimal).

Your task is to write a program that, given a natural number at base 10, shows its representation in hexadecimal.

Input
The input is a positive integer number V at base 10 (1 ≤ V ≤ 2 x 109).

Output
The output is the same number V at base 16 in a single line (don't forget the end-of-line character). Use uppercase letters, as shown in the examples.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 136 Bytes
@submission 12/28/19, 6:56:16 PM
*/
#include <stdio.h>

int main()
{
    unsigned int a;
    
    scanf("%u", &a);
    
    printf("%X\n", a);

    return 0;
}