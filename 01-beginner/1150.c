/*
URI Online Judge | 1150
Exceeding Z
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1150

Timelimit: 1

Write a program that reads two integers: X and Z (Z must be read as many times as necessary, until a number greater than X is read). Count how many integers must be summed in sequence (starting at and including X) so that the sum exceeds Z the minimum possible and writes this number.

The input may have, for example, the numbers ​​21 21 15 30. In this case, the number 21 is assumed for X, The numbers 21 and 15 must be ignored because they are smaller or equal to X. The number 30 is within the specification (greater than X) and is valid. So, the final result must be 2 for this test case, because the sum (21 + 22) is bigger than 30.

Input
The input contains only integer values​​, one per line, which may be positive or negative. The first number is the value of X. The next line will contain Z. If Z does not meet the specification of the problem, it should be read again, as many times as necessary.

Output
Print a line with an integer number representing the among of integer numbers that must be summed.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 348 Bytes
@submission 12/11/19, 2:28:26 AM
*/
#include <stdio.h>

int main()
{
    int x,z,soma;
    unsigned int c = 1;
    
    scanf("%d", &x);
    do {
        scanf("%d", &z);
    } while (z <= x);
    
    soma = x++;
    while (1) {
        if (soma > z)
            break;
        soma += x++;
        c++;
    }
    
    printf("%d\n", c);
    
    return 0;
}