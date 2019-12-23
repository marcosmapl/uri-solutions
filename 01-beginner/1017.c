/*
URI Online Judge | 1017
Fuel Spent
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1017

Timelimit: 1

Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.

Input
The input file contains two integers. The first one is the spent time in the trip (in hours). The second one is the average speed during the trip (in Km/h).

Output
Print how many liters would be needed to do this trip, with three digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 211 Bytes
@submission 5/22/18, 9:31:30 AM
*/
#include <stdio.h>
 
int main() {
    
    unsigned int timeElapsed, avgSpeed;
    scanf("%u", &timeElapsed);
    scanf("%u", &avgSpeed);
    printf("%.3f\n", (timeElapsed * avgSpeed) / 12.0f);
 
    return 0;
}