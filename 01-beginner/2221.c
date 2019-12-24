/*
URI Online Judge | 2221
Pomekons Battle
By Gabriel Duarte, UNIFESO BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2221

Timelimit: 1

After capturing many Pomekons, Dabriel and Guarte resolved to make a battle. The way of the duel is simple, each Master puts a Pomekon in battle and wins who has the Pomekon with the bigger value, which is defined as follows:
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_2221_en.png

The Bonus will be given to the Master Pomekon that are on a level of a value even.

This issue will be given to you the value of the applied bonuses, attack and defense values of Pomekon of Dabriel and Guarte and their levels, you have to inform the winner of the battle.

Input
The entrance is composed of several instances. The first line of input contains an integer T indicating the number of instances. Each instance starts with a integer B (0 ≤ B ≤ 100), which indicates the value of the applied bonus. In the following two lines will have three integers Ai, Di and Li (1 ≤ Ai, Di ≤ 100, 1 ≤ Li ≤ 50), represented the attack value of Pokemon, the defense value and the level of the Master Pomekon. The first line is the Dabriel Pomekon and the second the Guarte.

Output
For each instance in the input you should print the Master's name that will win the battle, in the event of a tie print: "Empate" without quotes.



@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 370 Bytes
@submission 7/20/18, 10:33:21 AM
*/
#include <stdio.h>

int main() {
  int n;
  
  scanf("%d",&n);
  
  while(n>0) {
    int a,b,c,d,e,f,bom;
    
    scanf("%d",&bom);
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    
    float n1, n2;
    
    n1=(float)(a+b)/2+((c%2==0)?bom:0);
    n2=(float)(d+e)/2+((f%2==0)?bom:0);
    
    printf("%s\n",(n1==n2)?"Empate":((n1>n2)?"Dabriel":"Guarte"));
    
    n--;
  }

  return 0;
}