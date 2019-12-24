/*
URI Online Judge | 1073
Even Square
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1073

Timelimit: 1

Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.

Input
The input contains an integer N (5 < N < 2000).

Output
Print the square of each one of the even values from 1 to N, as the given example.

Be carefull! Some language automaticly print 1e+006 instead 1000000. Please configure your program to print the correct format setting the output precision.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 217 Bytes
@submission 12/7/19, 2:48:19 PM
*/
#include <stdio.h>

int main()
{
    unsigned long int n, p = 2;
    
    scanf("%ld", &n);
    
    while (p <= n) {
        printf("%ld^2 = %ld\n", p, (p*p));
        p += 2;
    }
    
    return 0;
}