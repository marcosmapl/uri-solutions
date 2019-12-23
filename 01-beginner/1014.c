/*
URI Online Judge | 1014
Consumption
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1014

Timelimit: 1

Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

Input
The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

Output
Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 176 Bytes
@submission 5/22/18, 8:57:41 AM
*/
#include <stdio.h>
 
int main() {
    int km;
    float liters;
    scanf("%d",&km);
    scanf("%f",&liters);
    printf("%.3f km/l\n", (km / liters));
    return 0;
}