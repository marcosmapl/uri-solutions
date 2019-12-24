/*
URI Online Judge | 1151
Easy Fibonacci
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1151

Timelimit: 1

The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence. Thereafter, each number after the first 2 is equal to the sum of the previous two numbers. Write an algorithm that reads an integer N (N < 46) and that print the first N numbers of this sequence.

Input
The input file contains an integer number N (0 < N < 46).

Output
The numbers ​​should be printed on the same line, separated by a blank space. There is no space after the last number.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 485 Bytes
@submission 12/11/19, 2:56:26 AM
*/
#include <stdio.h>

int main()
{
    unsigned int a = 0, b = 1, temp, n,i;
    
    scanf("%d", &n);
    if (n == 1) {
        printf("0\n");
        return 0;
    }
    if (n == 2) {
        printf("0 1\n");
        return 0;
    }
    printf("0 1 ");
    for (i = 0; i < (n-2); i++) {
        temp = b;
        b += a;
        a = temp;
        printf("%d",b);
        if (i != (n-3))
            printf(" ");
    }
    printf("\n");
    
    return 0;
}