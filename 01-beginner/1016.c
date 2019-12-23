/*
URI Online Judge | 1016
Distance
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1016

Timelimit: 1

Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.

In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, in other words, it can get away one kilometer for each 2 minutes.

Read the distance (in km) and calculate how long it takes (in minutes) for the car Y to take this distance in relation to the other car.

Input
The input file contains 1 integer value.

Output
Print the necessary time followed by the message "minutos" that means minutes in Portuguese.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 130 Bytes
@submission 5/22/18, 9:25:15 AM
*/
#include <stdio.h>
 
int main() {
 
    int km;
    scanf("%d",&km);
    printf("%d minutos\n", km *2);
 
    return 0;
}