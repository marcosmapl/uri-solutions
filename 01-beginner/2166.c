/*
URI Online Judge | 2166
Square Root of 2
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2166

Timelimit: 1
The method of periodic continued fractions is one of the many ways to calculate the square root of a natural number. This method uses as denominator a repetition for fractions. This repetition can be done by a fixed number of times.

For example, by repeating 2 times the continued fraction to calculate the square root of 2, we have the following equation.
https://resources.urionlinejudge.com.br/gallery/images/contests/946.png

Your task is to calculate the approximate value of square root of 2 given the number N of repetitions.

Input
The input is a natural number N (0 ≤ N ≤ 100) that indicates the quantity of denominator repetitions in the continued fraction.

Output
The output is the approximate value of the square root with 10 decimal places.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 283 Bytes
@submission 1/25/20, 12:48:34 AM
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double raiz = 0.0;
    unsigned char n;
    
    scanf("%hhu", &n);
    while (n--) {
        raiz += 2.0;
        raiz = 1.0/raiz;
    }
    
    raiz += 1.0;
    printf("%.10lf\n", raiz);
    
    return 0;
}
