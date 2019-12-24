/*
URI Online Judge | 1961
Jumping Frog
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1961

Timelimit: 1

In each stage of the Jumping Frog game you must safely get your amphibian through a sequence of pipes of different heights to the rightmost pipe. Nevertheless the frog just survives if the height difference of consecutive pipes is at most the frog jump height. If the next pipe height is too high, the frog hits the pipe and fall. If the next pipe height is too low, the frog does not survive the fall. The frog always starts on the top of the leftmost pipe.

In this game the distance of pipes is irrelevant, which means that the frog always can reach the next pipe with a jump.
https://www.urionlinejudge.com.br/gallery/images/contests/E_1.png

You must write a program that, given the pipe heights and the frog jump height, show if the game stage can be beaten or not.

Input
The input is given in two lines. The first one has two positive integer numbers P and N, the frog jump height and the number of pipes (1 ≤ P ≤ 5 and 2 ≤ N ≤ 100). The second line has N positive integer numbers that indicate the pipes heights ordered from left to right. There are no height greater than 10.

Output
The output is given in a single line. If the frog can reach the rightmost pipe write "YOU WIN". If the frog fails, write "GAME OVER".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 387 Bytes
@submission 7/20/18, 10:14:35 AM
*/
#include <stdio.h>
#include <string.h>

int mod(int a);

int main() {
  int n,m;
  scanf("%d %d",&n,&m);
  int atu = -1;
  int flag=0;
  while(m>0) {
    int k;
    scanf("%d",&k);
    if(atu!=-1 && mod(atu-k)>n) {
      flag=1;
    }
    atu=k;
    m--;
  }
  printf("%s\n",(flag)?"GAME OVER":"YOU WIN");
}

int mod(int a) {
  if(a<0) return -a;
  return a;
}