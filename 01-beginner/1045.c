/*
URI Online Judge | 1045
Triangle Types
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1045

Timelimit: 1
Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:
if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 986 Bytes
@submission 7/19/18, 8:03:17 PM
*/
#include <stdio.h>

int main() {
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);
	
  if (b > a) {
    a += b;
    b = a - b;
    a -= b;
  }
  if (c > a) {
    a += c;
    c = a - c;
    a -= c;
  }

  if (a >= (b+c))
    printf("NAO FORMA TRIANGULO\n");
  else {
    a *= a;
    b *= b;
    c *= c;

    if ( a == (b + c))
      printf("TRIANGULO RETANGULO\n");
    else if (a > (b + c))
      printf("TRIANGULO OBTUSANGULO\n");
    else
      printf("TRIANGULO ACUTANGULO\n");

    if ((a == b) && (b == c))
      printf("TRIANGULO EQUILATERO\n");
    else if ((a==b) || (b == c) || (a == c))
      printf("TRIANGULO ISOSCELES\n");
  }

	return 0;
}