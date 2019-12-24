/*
URI Online Judge | 2161
Square Root of 10
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2161

Timelimit: 1

The method of periodic continued fractions is one of the many ways to calculate the square root of a natural number. This method uses as denominator a repetition for fractions. This repetition can be done by a fixed number of times.

For example, by repeating 2 times the continued fraction to calculate the square root of 10, we have the following equation.
https://resources.urionlinejudge.com.br/gallery/images/contests/933.png

Your task is to calculate the approximate value of square root of 10 given the number N of repetitions.

Input
The input is a natural number N (0 ≤ N ≤ 100) that indicates the quantity of denominator repetitions in the continued fraction.

Output
The output is the approximate value of the square root with 10 decimal places.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 255 Bytes
@submission 7/20/18, 10:27:19 AM
*/
#include <stdio.h>

double rec(int a);

int main() {
  int n;
  scanf("%d",&n);
  double r = 3 + rec(n-1);
  printf("%.10lf\n",r);
}

double rec(int a) {
  if(a==-1) return 0;
  if(a==0) return 1.0/6.0;
  else return 1.0/(6.0+rec(a-1));
}