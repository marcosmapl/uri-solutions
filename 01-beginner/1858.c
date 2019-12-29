/*
URI Online Judge | 1858
Theon's Answer
By Ricardo Oliveira, UFPR BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1858

Timelimit: 1

Ramsay: "(...) you win the game if you figure out who I am and why I'm torturing you."

Theon must think quickly and guess who his torturer is! However, Ramsey already decided what he will do after Theon gives his answer.

There are N people Theon may say the torturer is. Let us consider that the people are numbered from 1 to N. If Theon answers the torturer is person i, Ramsay will hit him Ti times.

You task is to help Theon and determine what he should answer in order to minimize the number of times he will be hit.

Input
The first line contains an integer N (1 ≤ N ≤ 100). The second line contains N integers T1, T2, ..., TN (0 ≤ Ti ≤ 20).

Output
Print a single line containing the number of the person Theon must say the torturer is. If there is more than one possible answer, print the smallest one.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 340 Bytes
@submission 12/28/19, 4:23:57 PM
*/
#include <stdio.h>

int main()
{
   unsigned char n, t, i, menor, pos = 0;
   
   scanf("%hhu", &n);
   scanf("%hhu", &t);
   menor = t;
   for (i=1; i < n; i++) {
       scanf("%hhu", &t);
       if (t < menor) {
           menor = t;
           pos = i;
       }
   }
   
   printf("%hhu\n", pos+1);
   
   return 0;
}