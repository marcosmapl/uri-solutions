/*
URI Online Judge | 1041
Coordinates of a Point
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1041

Timelimit: 1

Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are over one of the Cartesian axes or the origin (x = y = 0).
<img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1041.png" alt="Cartesian Plan">

If the point is at the origin, write the message "Origem".

If the point is over X axis write "Eixo X", else if the point is over Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 312 Bytes
@submission 7/20/18, 9:53:32 AM
*/
#include <stdio.h>

int main () {
  float x,y;
  scanf("%f %f",&x,&y);
  if(x==0 && y==0)  printf("Origem\n");
  else if(x==0) printf("Eixo Y\n");
  else if(y==0) printf("Eixo X\n");
  else {
    int num = (x<0) + (y<0);
    if(num == 1 && x>0) num=3;
    printf("Q%d\n",num+1);
  }
  return 0;
}
