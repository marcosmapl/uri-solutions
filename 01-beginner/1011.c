/*
URI Online Judge | 1011
Sphere
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1011

Timelimit: 1

Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.

Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++) assume that the division's result between two integers is another integer. :)

Input
The input contains a value of floating point (double precision).

Output
The output must be a message "VOLUME" like the following example with a space before and after the equal signal. The value must be presented with 3 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 167 Bytes
@submission 5/22/18, 1:08:36 AM
*/
#include <stdio.h>
 
int main() {
 
    double r;
    scanf("%lf",&r);
    printf("VOLUME = %.3lf\n", ((4.0 / 3.0) * (3.14159) * (r * r * r)));
    return 0;
}