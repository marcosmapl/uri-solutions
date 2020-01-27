/*
URI Online Judge | 2172
Event
By Nivaldo Carvalho, UNIPE BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2172

Timelimit: 2
Prog and Cackto recently started to play a role-playing game called Fortress. In this game, for player's evolve their level they need to defeat monsters, which gives a value of experience (XP) for player.

The producer of the game, Extreme Games, announced that next week will hold the first XP event of this game in which will increase monsters experience in an X value. As Prog and Cackto are at a very high level at which the monsters have a very high amount of experience points, they are having difficulties in calculating the amount of experience points that the monsters will have during the event. You can help them?

Input
There will be several test cases. Each test case contains two values: X (0 < X ≤ 3) indicating the increase in value of EXP from monsters and M (10 ≤ M ≤ 232-1) indicating the EXP value of the monster. The entry ends with values X == 0 and M == 0, in which should not be processed.

Output
For each case, your program should show a value E, value of new Monster EXP.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.008s
@size 257 Bytes
@submission 1/26/20, 8:42:02 PM
*/
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char x;
    unsigned long m;

    scanf("%hhu %lu", &x, &m);
    while (x) {
        printf("%lu\n", (x*m));
        
        scanf("%hhu %lu", &x, &m);
    }

    return 0;
}