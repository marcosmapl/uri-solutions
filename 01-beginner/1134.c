/*
URI Online Judge | 1134
Type of Fuel
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1134

Timelimit: 1

A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4.

Input
The input contains only integer and positive values.

Output
It should be written the message: "MUITO OBRIGADO" and the amount of customers who fueled each fuel type, as an example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 412 Bytes
@submission 12/10/19, 12:31:01 PM
*/
#include <stdio.h>

int main()
{
    int a = 0, g = 0, d = 0,n;
    
    do {
        scanf("%d", &n);
        if (n == 1)
            a++;
        if (n == 2)
            g++;
        if (n == 3)
            d++;
    } while (n != 4);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    
    return 0;
}