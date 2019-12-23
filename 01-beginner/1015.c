/*
URI Online Judge | 1015
Distance Between Two Points
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1015
Timelimit: 1

Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance = <img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1015.png" alt="Distance Formula">

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 277 Bytes
@submission 5/22/18, 9:21:36 AM
*/
#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1, y1, x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    x1 = (x2 - x1) * (x2 - x1);
    y1 = (y2 - y1) * (y2 - y1);
    printf("%.4lf\n", sqrt(x1 + y1));
 
    return 0;
}