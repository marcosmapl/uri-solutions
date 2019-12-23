/*
URI Online Judge | 1047
Game Time with Minutes
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1047

Timelimit: 1

Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 605 Bytes
@submission 12/6/19, 11:46:40 PM
*/
#include <stdio.h>

int main() {
 
    int hi, mi, hf, mf;
    
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    
    if (hf < hi ) {
        hf += 24;
        if (mf < mi) {
            hf--;
            mf += 60;
        }
    } else if (hf > hi) {
        if (mf < mi) {
            hf--;
            mf += 60;
        } 
    } else {
        if (mf < mi) {
            hf += 23;
            mf += 60;
        } else if (mf == mi) {
            hf += 24;
        }
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (hf-hi), (mf-mi));
    
    return 0;
}