/*
URI Online Judge | 2031
Rock, Paper, Airstrike
By Jeremias Gomes, Universidade de Brasília BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2031

Timelimit: 1
Rock, Paper, Airstrike is a very popular children’s game, in which two or more children form a circle and do hand gestures in an attempt to get the victory. The rules are surprisingly complex for a children’s game, but it’s still quite popular around the world.
The games are very simple. Players can choose between the sign of a Rock (fist), the sign of a paper (an open palm), and the signal to the Air Attack (like the paper, but with only the thumb and little finger extended).
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_2031.png	

A game with two players have the following rules to determine a winner:

Airstrike vs. Rock: In this case, the player with Airstrike defeats the player with Rock for obvious reasons.
Rock vs. Paper: In this case the player with Rock defeats the one with Paper, because Rock hurts more.
Paper vs. Airstrike: In here Airstrike wins because Airstrike always wins and Paper is pathetic.
Paper vs. Paper: In this variation both players win because Paper is useless and no one facing Paper can lose.
Rock vs. Rock: To this case there is no winner because it depends on what the players decide to do with the Rock and usually do nothing at the end.
Airstrike vs. Airstrike: When this happens all players lose due to Mutual Annihilation.
Your task is to write a program that given the choice of two players tell who won the game.

Input
The input consist of N (1 ≤ N ≤ 1000) test cases. N should be read in the first line of input. Each test case is composed of two lines each containing a string. The first string is the sign chosen by Player 1 and the second string is the sign chosen by the Player 2. These string can be:

“ataque”: to represents Airstrike
“pedra”: to represents Rock
“papel”: tp represents Paper
Output
The output must be contain:

“Jogador 1 venceu”: if Player 1 has won the game
“Jogador 2 venceu”: if Player 2 has won the game
“Ambos venceram”: if the both have won the game
“Sem ganhador”: if there is no winner
“Aniquilacao mutua”: if Mutual Annihilation occurs
Each output of a test case must be in one line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 620 Bytes
@submission 1/13/20, 12:07:04 AM
*/
#include <stdio.h>
#include <string.h>
int main()
{
    unsigned int n;
    char j1[10], j2[10];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", j1);
        scanf("%s", j2);
        if(j1[1]=='e' && j2[1]=='e') 
            printf("Sem ganhador\n");
        else if(j1[1]=='t' && j2[1]=='t') 
            printf("Aniquilacao mutua\n");
        else if(j1[1]=='a' && j2[1]=='a') 
            printf("Ambos venceram\n");
        else if(j1[1]=='t' || (j1[1]=='e' && j2[1]=='a'))
            printf("Jogador 1 venceu\n");
        else printf("Jogador 2 venceu\n");
    }
    return 0;
}