/*
URI Online Judge | 1006
Average 2
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1006

Timelimit: 1

Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points with one digit after the decimal point.

Output
Print MEDIA(average in Portuguese) according to the following example, with a blank space before and after the equal signal.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
@time 0.000s
@size 273 Bytes
@submission 5/21/18, 9:32:02 AM
*/
#include <iostream>
 
using namespace std;
 
int main() {
 
    float a, b , c, avg;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    a *= 2;
    b *= 3;
    c *= 5;
    avg = (a+b+c) / 10;
    printf("MEDIA = %.1f\n",avg);
 
    return 0;
}