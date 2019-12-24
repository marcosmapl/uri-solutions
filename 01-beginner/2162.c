/*
URI Online Judge | 2162
Peaks and Valleys
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2162

Timelimit: 1

Professor MC realized that at each 100 meter interval there is a peak in the Nlogony landscape. And that at exactly half way of each two peaks there is a valley. That means that at each 50 meters there is a valley or a peak and, alongside the landscape, there is not a peak followed by another peak neither there is a valley followed by another valley.

Professor MC got curious with that pattern and wants to know if this happens again to other landscapes. Your task is, given a landscape, to indicate if it has this pattern.

Input
The input is given in two lines. The first one has the number N of landscape measures (1 < N ≤ 100). The second line has N integers: the height Hi of each measure (-10000 ≤ Hi ≤ 10000, for all Hi, such that 1 ≤ i ≤ N). A measure is considered a peak if it is higher than the previous measure. A measure is considered a valley if it is lower than the previous measure.

Output
The output is given in one single line. If the landscape has the same pattern of Nlogony it must be shown the number 1. Otherwise, the number 0 must be shown.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 526 Bytes
@submission 7/27/18, 9:23:58 AM
*/
#include <stdio.h>

int main() {
  int n, x=12000, ant=12000, prim=1, aux=-1, flag=1;
  scanf("%d",&n);
  while(n>0) {
    ant=x;
    scanf("%d",&x);
    if(ant!=12000 && prim) {
      prim=0;
      if(ant<x) aux=-1;
      else if(ant>x) aux=1;
      else flag=0;
    }
    else {
      if(ant<x) {
        if(aux==-1) flag=0;
        else aux=-1;
      }
      else if(ant>x) {
        if(aux==1) flag=0;
        else aux=1;
      }
      else flag=0;
    }
    n--;
  }
  printf("%d\n",flag);
  return 0;
}