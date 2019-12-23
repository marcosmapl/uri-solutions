/*
URI Online Judge | 1012
Area
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1012

Timelimit: 1

	Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 364 Bytes
@submission 5/22/18, 1:20:54 AM
*/
#include <stdio.h>
 
int main() {
 
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\n", ((a * c) / 2.0));
    printf("CIRCULO: %.3lf\n", (c * c * 3.14159));
    printf("TRAPEZIO: %.3lf\n", (((a + b) * c) / 2.0));
    printf("QUADRADO: %.3lf\n", (b * b));
    printf("RETANGULO: %.3lf\n", (a * b));
    return 0;
}