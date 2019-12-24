/*
URI Online Judge | 2632
Magic and Sword
By Edson Alves da Costa Júnior, UNB BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2632

Timelimit: 1

In the Magic and Sword Tower defense, the player can cast area spells to defeat the enemy units. The spells are elemental: fire, water, air and earth, and the affected region is determined by a circle whose radius depends on the level of the spell.

The table below lists each spell, damage and its radius per level:
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_2632.png

The enemy units are delimited by a rectangle of width w and height h, with the lower left corner positioned at the point (x0, y0). The enemy will suffer damage if their bounding rectangle has any intercession with the area defined by the spell circle.

Given the position and the bounding rectangle of the enemy unit, the center of the explosion, the identifier and level of the spell, determine the damage to the unit. If the unit is out of the spell range, the damage is equal to zero.

Input
The input consists of T (1 ≤ T ≤ 1000) test cases, where the value of T is reported in the first line of the input. Each test case consists of two lines. The first contains four integers representing the dimensions w and h (1 ≤ w, h ≤ 1000) of the rectangle and the coordinates x0 and y0 (0 ≤ x0, y0 ≤ 1000) from the lower left corner. The second line of the test case contains a string with the spell identifier (fire, water, earth and air), the level N of this spell (1 ≤ N ≤ 3) and the coordinates cx e cy (0 ≤ cx, cy ≤ 1000) from the center of the explosion area.

Output
For each test case, the output must be the value of the damage received by the unit, followed by a line break.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Wrong answer(20%)
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 1.72 KB
@submission 7/20/18, 11:12:52 AM
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

float dist(float x, float y, float w, float h, float cx, float cy);
float max(float a, float b);

int main() {
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    float x, y, w, h, r, cx,cy;
    int l,d;
    char nome[100];
    scanf("%f %f %f %f",&x,&y,&w,&h);
    scanf(" %s %d %f %f",nome,&l,&cx,&cy);
    if(!strcmp(nome,"fire")) {
      d=200;
      switch(l) {
        case 1:
          r=20;
          break;
        case 2:
          r=30;
          break;
        case 3:
          r=50;
          break;
      }
    }
    else if(!strcmp(nome,"water")) {
      d=300;
      switch(l){
        case 1:
          r=10;
          break;
        case 2:
          r=25;
          break;
        case 3:
          r=40;
          break;
      }
    }
    else if(!strcmp(nome,"earth")) {
      d=400;
      switch(l) {
        case 1:
          r=25;
          break;
        case 2:
          r=55;
          break;
        case 3:
          r=70;
          break;
      }
    }
    else if(!strcmp(nome,"air")) {
      d=100;
      switch(l) {
        case 1:
          r=18;
          break;
        case 2:
          r=38;
          break;
        case 3:
          r=60;
          break;
      }
    }
    if(r*r<dist(x,y,w,h,cx,cy)) printf("0\n");
    else printf("%d\n",d);
  }
}

float dist(float x, float y, float w, float h, float cx, float cy) {
  float dx, dy;
  float px=x+w/2;
  float py=y+h/2;
  dx = max(abs(px - cx) - w / 2, 0);
  dy = max(abs(py - cy) - h / 2, 0);
  return dx * dx + dy * dy;
}
float max(float a, float b) {
  if(a>b) return a;
  else return b;
}
