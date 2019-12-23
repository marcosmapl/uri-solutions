/*
URI Online Judge | 1002
Area of a Circle
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1002

Timelimit: 1

The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:

Calculate the area using the formula given in the problem description.

Input
The input contains a value of floating point (double precision), that is the variable R.

Output
Present the message "A=" followed by the value of the variable, as in the example bellow, with four places after the decimal point. Use all double precision variables. Like all the problems, don't forget to print the end of line after the result, otherwise you will receive "Presentation Error".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 144 Bytes
@submission 5/21/18, 8:03:28 AM
*/
#include <stdio.h>
 
int main() {
 
    double r;
    
    scanf("%lf",&r);
    printf("A=%.4lf\n",((r*r)*3.14159));
 
    return 0;
}