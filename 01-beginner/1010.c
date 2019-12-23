/*
URI Online Judge | 1010
Simple Calculate
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1010

Timelimit: 1

In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

Output
The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 316 Bytes
@submission 5/22/18, 1:01:09 AM
*/
#include <stdio.h>
 
int main() {
 
    int code, unit;
    float value, total = 0;
    
    scanf("%d %d %f", &code, &unit, &value);
    total += unit * value;
    scanf("%d %d %f", &code, &unit, &value);
    total += unit * value;
 
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    
    return 0;
}