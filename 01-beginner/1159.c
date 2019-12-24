/*
URI Online Judge | 1159
Sum of Consecutive Even Numbers
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
The program must read an integer X indefinite times (stop when X=0). For each X, print the sum of five consecutive even numbers from X, including it if X is even. If the input number is 4, for example, the output must be 40, that is the result of the operation: 4+6+8+10+12. If the input number is 11, for example, the output must be 80, that is the result of 12+14+16+18+20.

Input
The input file contains many integer numbers. The last one is zero.

Output
Print the output according to the example below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 256 Bytes
@submission 12/11/19, 4:02:03 AM
*/
#include <stdio.h>

int main()
{
    int x,y;

    scanf("%d", &x);
    while (x) {
        if ((x % 2 == 1) || (x % 2 == -1))
            x++;
        
        printf("%d\n", (x*5)+20);
        scanf("%d", &x);
    }
    
    return 0;
}