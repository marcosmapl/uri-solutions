/*
URI Online Judge | 1149
Summing Consecutive Integers
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1149

Timelimit: 1

Write an algorithm to read a value A and a value N. Print the sum of N numbers from A (inclusive). While N is negative or ZERO, a new N (only N) must be read. All input values are in the same line.

Input
The input contains only integer values, ​​can be positive or negative.

Output
The output contains only an integer value.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 274 Bytes
@submission 12/10/19, 1:55:37 PM
*/
#include <stdio.h>

int main()
{
    int a, n, soma = 0;
    
    scanf("%d", &a);
    do {
        scanf("%d", &n);
    } while (n < 1);
    
    for (; n; n--) {
        soma += a + (n-1);
    }
        
    printf("%d\n", soma);
    
    return 0;
}