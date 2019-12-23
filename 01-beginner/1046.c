/*
URI Online Judge | 1046
Game Time
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1046

Timelimit: 1

Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Input
Two integer numbers representing the start and end time of a game.

Output
Print the duration of the game as in the sample output.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 365 Bytes
@submission 7/19/18, 8:08:36 PM
*/
#include <stdio.h>

int main() {
	int inicio, termino;

	scanf("%d %d", &inicio, &termino);

  if (inicio == termino) {
    printf("O JOGO DUROU 24 HORA(S)\n");
  } else if (inicio < termino) {
    printf("O JOGO DUROU %d HORA(S)\n", (termino - inicio));
  } else {
    printf("O JOGO DUROU %d HORA(S)\n", (24 - inicio) + termino);
  }

	return 0;
}