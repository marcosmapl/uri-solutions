/*
URI Online Judge | 1003
Simple Sum
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1003

Timelimit: 1

Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.

Input
The input file contains 2 integer numbers.

Output
Print the variable SOMA with all the capital letters, with a blank space before and after the equal signal followed by the corresponding value to the sum of A and B. Like all the problems, don't forget to print the end of line, otherwise you will receive "Presentation Error"

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 178 Bytes
@submission 5/21/18, 8:11:33 AM
*/
#include <stdio.h>
 
int main() {
 
    int a, b, SOMA = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    SOMA = a + b;
    printf("SOMA = %d\n",SOMA);
 
    return 0;
}