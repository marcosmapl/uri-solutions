/*
URI Online Judge | 1958
Scientific Notation
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1958

Timelimit: 1

Floating point numbers can be very long to show. In these cases, it is convenient to use the scientific notation.

You must write a program that, given a floating point number, shows this number in scientific notation: always show the mantissa sign; always show the mantissa with 4 decimal places; use the character 'E' between the mantissa and the exponent; always show the exponent sign; and show the exponent with at least 2 digits.

Input
The input is a double precision floating point number X (according to the IEEE 754-2008 standard). There will never be a number with more than 110 characters long and more than 6 decimal places.

Output
The output is the number X in a single line using the scientific notation detailed above. See the examples below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 333 Bytes
@submission 12/28/19, 7:29:50 PM
*/
#include <stdio.h>

unsigned char is_negative(void *ptr, unsigned short size) 
{
    unsigned char *p = ptr;
    
    return (p[size-1] >> 7);
}

int main()
{
    double x;
    
    scanf("%lf", &x);
    
    if (!is_negative( &x, sizeof(x)))
        printf("+");
        
    printf("%.4E\n", x);
    return 0;
}