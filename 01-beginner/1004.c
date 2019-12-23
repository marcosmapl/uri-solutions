/*
URI Online Judge | 1004
Simple Product
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1004

	Timelimit: 1

Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.

Input
The input file contains 2 integer numbers.

Output
Print PROD according to the following example, with a blank space before and after the equal signal.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 178 Bytes
@submission 5/21/18, 8:14:12 AM
*/
#include <stdio.h>
 
int main() {
 
    int a, b, PROD = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    PROD = a * b;
    printf("PROD = %d\n",PROD);
 
    return 0;
}