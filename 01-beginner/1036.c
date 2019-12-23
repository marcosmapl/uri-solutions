/*
URI Online Judge | 1036
Bhaskara's Formula
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1036

Timelimit: 1

Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 371 Bytes
@submission 7/19/18, 7:00:38 PM
*/
#include <stdio.h>
#include <math.h>

int main() {
	double delta, a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);
	delta = (b * b) - (4 * a * c);
	
	if ((a <= 0.0) || (delta < 0.0)) {
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5lf\n", (-b + sqrt(delta)) / (2 * a));
		printf("R2 = %.5lf\n", (-b - sqrt(delta)) / (2 * a));
	}

	return 0;
}