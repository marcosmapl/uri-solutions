/*
URI Online Judge | 1038
Snack
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.
<img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1038_en.png" alt="Price Table">

Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 227 Bytes
@submission 12/6/19, 9:26:56 PM
*/
#include <stdio.h>
 
int main() {
 
    double precos[] = { 4.0, 4.5, 5.0, 2.0, 1.5 };
    int it, qt;
    
    scanf("%d %d", &it, &qt);
    
    printf("Total: R$ %.2lf\n", (precos[it-1]*qt));
    
    return 0;
}