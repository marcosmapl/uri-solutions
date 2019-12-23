/*
URI Online Judge | 1005
Average 1
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1005
Timelimit: 1

Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.

Input
The input file contains 2 floating points' values with one digit after the decimal point.

Output
Print MEDIA(average in Portuguese) according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 185 Bytes
@submission 12/7/19, 12:15:41 AM
*/	
#include <stdio.h>
 
int main() {

    double a, b, avg;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("MEDIA = %.5lf\n", ((a*3.5)+(b*7.5)) / 11.0);
 
    return 0;
}