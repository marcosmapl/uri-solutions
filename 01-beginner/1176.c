/*
URI Online Judge | 1176
Fibonacci Array
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1176

Timelimit: 1

Write a program that reads a number and print the Fibonacci number corresponding to this read number. Remember that the first elements of the Fibonacci series are 0 and 1 and each next term is the sum of the two preceding it. All the Fibonacci numbers calculated in this program must fit in a unsigned 64 bits number.

Input
The first line of the input contains a single integer T, indicating the number of test cases. Each test case contains a single integer N (0 ≤ N ≤ 60), corresponding to the N-th term of the Fibonacci series.

Output
For each test case in the input, print the message "Fib(N) = X", where X is the N-th term of the Fibonacci series.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 429 Bytes
@submission 12/22/19, 5:17:09 PM
*/
#include <stdio.h>

unsigned long long fiboN(unsigned int n) {
    unsigned long long a = 0, b = 1, temp;
    for (;n; n--) {
        temp = a;
        a += b;
        b = temp;
    }
    return a;
}

int main()
{
    unsigned long long x;
    unsigned int t, n;
    
    scanf("%u", &t);
    do {
        scanf("%u", &n);
        printf("Fib(%u) = %llu\n", n, fiboN(n));
    } while (--t);
    return 0;
}