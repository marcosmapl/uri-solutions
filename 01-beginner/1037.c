/*
URI Online Judge | 1037
Interval
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1037

Timelimit: 1

You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message “Fora de intervalo” that means "Out of Interval".

The symbol '(' represents greather than. For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.

Input
The input file contains a floating-point number.

Output
The output must be a message like following example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 493 Bytes
@submission 11/28/19, 9:20:53 AM
*/
#include <stdio.h>
 
int main() {
 
    double n;
    scanf("%lf", &n);
    if (n < 0) {
        printf("Fora de intervalo\n");
    } else if (n <= 25.0) {
        printf("Intervalo [0,25]\n");
    } else if (n <= 50.0) {
        printf("Intervalo (25,50]\n");
    } else if (n <= 75.0) {
        printf("Intervalo (50,75]\n");
    } else if (n <= 100.0) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
 
    return 0;
}