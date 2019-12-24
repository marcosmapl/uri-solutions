/*
URI Online Judge | 1145
Logical Sequence 2
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1145

Timelimit: 1

Write an program that reads two numbers X and Y (X < Y). After this, show a sequence of 1 to y, passing to the next line to each X numbers.

Input
The input contains two integer numbers X (1 < X < 20) and Y (X < Y < 100000).

Output
Each sequence must be printed in one line, with a blank space between each number, like the following example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.012s
@size 335 Bytes
@submission 12/10/19, 1:13:21 PM
*/
#include <stdio.h>

int main()
{
    unsigned int c, n, i = 1, j = 1;
    
    scanf("%u %u", &c, &n);
    while (i <= n) {
        printf("%d", i++);
        if (j < c) {
            printf(" ");
            j++;
        } else {
            printf("\n");
            j = 1;
        }
    }
    
    return 0;
}