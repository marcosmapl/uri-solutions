/*
URI Online Judge | 1044
Multiples
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1044

Timelimit: 1

Read two nteger values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 238 Bytes
@submission 12/6/19, 10:03:08 PM
*/
#include <stdio.h>

int main() {
 
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if ((a%b == 0) || (b%a == 0))
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    
    return 0;
}