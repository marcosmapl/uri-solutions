/*
URI Online Judge | 1043
Triangle
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1043

Timelimit: 1

Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:

Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:

Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 510 Bytes
@submission 12/6/19, 9:51:13 PM
*/
#include <stdio.h>

int is_triangle(double a, double b, double c) {
    if ((a >= (b+c)) || (b >= (a+c)) || (c >= (a+b)))
        return 0;
    if ((a*a <= (b-c)*(b-c)) || (b*b <= (a-c)*(a-c)) || (c*c <= (a-b)*(a-b)))
        return 0;
    return 1;
}

int main() {
 
    double a,b,c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (is_triangle(a,b,c))
        printf("Perimetro = %.1lf\n", (a+b+c));
    else
        printf("Area = %.1lf\n", ((a+b)*c)/2.0);
    
    return 0;
}