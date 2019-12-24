/*
URI Online Judge | 2650
Building Walls
By Abner Samuel P. Palmeira, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2650

Timelimit: 1

After the colossal titan destroys the Maria wall, the exploration troop has decided to build a new wall, this wall will be so hard that no titan can break it.

But if the titan is too tall he can simply jump over the wall, because of this the Exploration Army hired you to write a program, that given the height of the wall and the size of the knowed titans, answer which Titans will be able To pass over the wall.

A titan can jump over a wall only if it is taller than the wall.

Input
The first line contains two integers N (1 ≤ N ≤ 100) and W (1 ≤ W ≤ 1000) representing respectively how many titans the Exploration Troop knows and the size of the wall they intend to build.

Each of the following N lines contains a string S (1 ≤ |S| ≤ 100) representing the name of the titan, followed by an integer H (1 ≤ H ≤ 1000) representing the height of the titan. The string is composed of uppercase, lowercase letters and spaces.

The name of a titan never begins or ends with space.

Output
Your show should show which titans will be able to pass over the wall, the titans should be displayed in the order they appear at the entrance.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 332 Bytes
@submission 7/27/18, 10:40:17 AM
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,c;
    char nome[1000];
    scanf("%d %d",&n,&m);
    while(n>0) {
        scanf(" %[^0-9\n]s",nome);
        scanf("%d",&c);
        if(strlen(nome)!=0) nome[strlen(nome)-1]=0;
        if(c>m) printf("%s\n",nome);
        n--;
    }
    return 0;
}