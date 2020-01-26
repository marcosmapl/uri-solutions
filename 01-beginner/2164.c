/*
URI Online Judge | 2164
Fast Fibonacci
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2164

Timelimit: 1
Binet's formula is a way to calculate Fibonacci numbers.
https://resources.urionlinejudge.com.br/gallery/images/contests/944.png

Your task is, given a natural number n, to compute the value of Fibonacci(n) using the formula above.

Input
The input is a natural number n (0 < n ≤ 50).

Output
The output is the value of Fibonacci(n) with 1 decimal place using the given Binet's formula.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 250 Bytes
@submission 1/25/20, 12:25:16 AM
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double n, sqrt_5 = sqrt(5);
    
    scanf("%lf", &n);

    n = (pow((1.0+sqrt_5)/2.0, n) - pow((1.0-sqrt_5)/2.0, n)) / sqrt_5;
    
    printf("%.1lf\n", n);
    
    return 0;
}
