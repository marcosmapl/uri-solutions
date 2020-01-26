/*
URI Online Judge | 2159
Approximate Number of Primes
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2159

Timelimit: 1
Schoenfeld and Rosser published a paper in 1962 describing a minimum and a maximum value to the quantity of prime numbers up to n, for n ≥ 17. This quantity is represented by the function (n) and the inequality is shown below.
https://resources.urionlinejudge.com.br/gallery/images/contests/931.png

Your task is, given a natural number n, to compute the interval's minimum and maximum values to the approximate number of primes up to n.

Input
The input is a natural number n (17 ≤ n ≤ 109).

Output
The output is given as two values P and M with 1 decimal place each, such that P < (n) < M according to the given inequality above. These two values have one blank space between them.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 189 Bytes
@submission 1/24/20, 11:02:10 PM
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    
    scanf("%lf", &n);
    n /= log(n) ;
    
    printf("%.1lf %.1lf\n", n, 1.25506*n);

    return 0;
}
