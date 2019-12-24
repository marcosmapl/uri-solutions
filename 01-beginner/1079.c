/*
URI Online Judge | 1079
Weighted Averages
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1079

Timelimit: 1

Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.

Input
The input file contains an integer number N in the first line. Each N following line is a test case with three float-point numbers, each one with one digit after the decimal point.

Output
For each test case, print the weighted average according with below example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 260 Bytes
@submission 12/8/19, 7:52:29 AM
*/
#include <stdio.h>

int main(void) {
    unsigned int n;
    double x,y,z;
    
    scanf("%hd", &n);
    do {
        scanf("%lf %lf %lf", &x, &y, &z);
        printf("%.1lf\n", ((2*x)+(3*y)+(5*z))/10.0);
    } while (--n);
    

    return 0;
}