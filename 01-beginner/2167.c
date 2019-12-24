/*
URI Online Judge | 2167
Engine Failure
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2167

Timelimit: 1

Engineer Joe realizes that always happened a speed fall when the measures of an engine speed slope were made at 10 ms time interval. But this fall happened at varying points at each new engine test.

Joe got curious with that lack of pattern and wants to know, for each engine test, what is the first point in which this speed fall happens.

Input
The input is an engine test and is given in two lines. The first one has the number N of speed measures (1 < N ≤ 100). The second line has N integers: the engine RPM (revolutions per minute) Ri of each measure (0 ≤ Ri ≤ 10000, for all Ri, such that 1 ≤ i ≤ N). A measure is considered a speed fall if it is lower than the previous measure.

Output
The output is the measure index where the first speed fall happened in the test. If no speed fall happens the output must be the number zero.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 277 Bytes
@submission 7/27/18, 9:26:00 AM
*/
#include <stdio.h>

int main() {
  int n,i, x=-12000, ant=-12000, prim=1, aux=-1, flag=1;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    ant=x;
    scanf("%d",&x);
    if(x<ant && flag) {
      printf("%d\n",i+1);
      flag=0;
    }
  }
  if(flag) 
  	printf("0\n");

  return 0;
}