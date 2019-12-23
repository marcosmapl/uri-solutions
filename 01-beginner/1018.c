/*
URI Online Judge | 1018
Banknotes
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1018
Timelimit: 1

In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 866 Bytes
@submission 5/23/18, 8:52:28 AM
*/
#include <stdio.h>
 
int main() {
 
    unsigned int value, rest;
    
    scanf("%u", &value);
    printf("%u\n", value);
    
    rest = value / 100;
    printf("%u nota(s) de R$ 100,00\n", rest);
    
    value = value - (rest * 100);
    rest = value / 50;
    printf("%u nota(s) de R$ 50,00\n", rest);
    
    value = value - (rest * 50);
    rest = value / 20;
    printf("%u nota(s) de R$ 20,00\n", rest);
    
    value = value - (rest * 20);
    rest = value / 10;
    printf("%u nota(s) de R$ 10,00\n", rest);
    
    value = value - (rest * 10);
    rest = value / 5;
    printf("%u nota(s) de R$ 5,00\n", rest);
    
    value = value - (rest * 5);
    rest = value / 2;
    printf("%u nota(s) de R$ 2,00\n", rest);
    
    value = value - (rest * 2);
    printf("%u nota(s) de R$ 1,00\n", value);
 
    return 0;
}