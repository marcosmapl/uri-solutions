/*
URI Online Judge | 1071
Sum of Consecutive Odd Numbers I
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1071

Timelimit: 1

Read two integer values X and Y. Print the sum of all odd values between them.

Input
The input file contain two integer values.

Output
The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 353 Bytes
@submission 12/7/19, 2:18:36 PM
*/
#include <stdio.h>

int main()
{
    int a,b,sum;

    scanf("%d", &a);
    scanf(" %d", &b);
    
    if (a > b) {
        sum = b;
        b = a;
        a = sum;
    }
    
    sum = 0;
    a++;
    while (a < b) {
        if (a % 2 != 0)
            sum += a;
        a++;
    }
    printf("%d\n", sum);
    
    return 0;
}