/*
URI Online Judge | 1165
Prime Number
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1165

Timelimit: 1

A Prime Number is a number that is divisible only by 1 (one) and by itself. For example the number 7 is Prime, because it can be divided only by 1 and by 7.

Input
The input contains several test cases. The first contains the number of test cases N (1 ≤ N ≤ 100). Each one of the following N lines contains an integer X (1 < X ≤ 107), that can be or not a prime number.

Output
For each test case print the message “X eh primo” (X is prime) or “X nao eh primo” (X isn't prime) according with to above specification.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 556 Bytes
@submission 12/13/19, 1:31:23 AM
*/
#include <stdio.h>

int main()
{
    unsigned char n;
    unsigned int x, i;
    
    scanf("%hhu", &n);
    
    do {
        scanf("%u", &x);
        if ((x > 2) && (x % 2 == 0))
            printf("%d nao eh primo\n", x);
        else {    
            for (i = 2; i < x; i++)
                if (x % i == 0)
                    break;
        
            if (i < x)
                printf("%d nao eh primo\n", x);
            else 
                printf("%d eh primo\n", x);
        }
    } while (--n);
    
    return 0;
}