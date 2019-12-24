/*
URI Online Judge | 1865
Mjölnir
By Ricardo Martins, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1865

Timelimit: 1

Odin created to Thor the most faithful and powerful possible weapon, Mjolnir hammer. Made of a special mystical ore called Uru and forged in the heart of a star by blacksmiths Gods of Asgard , Brokk and Eitri , blacksmiths legendary.

One day , Thor challenged his friends to see who could raise the Mjölnir .

Write a program that , given a name , and the force in Newtons applied to try to lift the Thunder Hammer , inform the person succeeded in lifting it .

Input
An integer C shall be informed , which is the amount of test cases. Each test case begins with one word , which is the first name of who is trying to raise Mjölnir , and an integer N ( 1 ≤ N ≤ 25000 ), indicating the force applied upward in Newtons to pull the hammer of so try to lift it.

Output
For each test case print a 'Y' character , if the person has managed to raise or 'N' if you have not achieved .

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 263 Bytes
@submission 7/20/18, 9:53:05 AM
*/
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d",&n);
  while(n>0) {
    char lala[100000];
    int p;
    scanf(" %s %d",lala,&p);
    if(!strcmp(lala,"Thor") && p>0) printf("Y\n");
    else printf("N\n");
    n--;
  }
}