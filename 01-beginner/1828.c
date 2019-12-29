/*
URI Online Judge | 1828
Bazinga!
Por Edson Alves, Faculdade UnB Gama BRBrazil

https://www.urionlinejudge.com.br/judge/en/problems/view/1828

Timelimit: 1
In the 8th episode of Big Bang Theory's second season, The Lizard-Spock Expansion, Sheldon and Raj are arguing about what is the best: the movie Saturn 3 or the TV show Deep Space 9. Raj suggests rock-paper-scissors to settle down the dispute. However, Sheldon says "Ooh, I don't think so. No, anectodal evidence suggests that in the game of rock-paper-scissors, players familiar with each other will tie 75 to 80% of the time due to the limited number of outcomes. I suggest rock-paper-scissors-lizard-Spock".

The rules of the game are:

scissors cuts paper;
paper covers rock;
rock crushes lizard;
lizard poisons Spock;
Spock smashes scissors;
scissors decapitates lizard;
lizard eats paper;
paper disproves Spock;
Spock vaporizes rock;
rock crushes scissors.
Both choosed Spock and the game tied. However, it isn't hard to realize what would happened if the game had continued. In the case of Sheldon's victory, he would've said: "Bazinga!"; if Raj had won, Sheldon would declare: "Raj trapaceou!" ("Raj cheated" in portuguese); in ties, he would request a new game: "De novo!" ("Again!", in portuguese). Given the options chosen by both, make a program that prints Sheldon reaction to the outcome.

Input
The first line contains an integer T (T ≤ 100) indicating the number of test cases. Each test case is described using one line. The line contains Sheldon and Raj options, separated by one blank space. The possible options are: pedra, papel, tesoura, lagarto e Spock (rock, paper, scissors, lizard and Spock).

Output
For each test case your program must output a single line with the following message: "Caso #t: R", where t is the test case number and R is Sheldon's reaction to the outcome: "Bazinga!", "Raj trapaceou!", or "De novo!".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 1.08 KB
@submission 12/27/19, 8:07:31 AM
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char n,i = 1;
    char sheldon[9], raj[9];
    
    scanf("%hhu", &n);
    while(n--) {
        scanf("%s %s", sheldon, raj);
        if (sheldon[2] == raj[2]) {
            printf("Caso #%d: De novo!\n", i++);
        } else {
            if ((sheldon[2] == 'd') && ((raj[2] == 'g') || (raj[2] == 's')))
                printf("Caso #%d: Bazinga!\n", i++); 
            else if ((sheldon[2] == 'p') && ((raj[2] == 'd') || (raj[2] == 'o')))
                printf("Caso #%d: Bazinga!\n", i++); 
            else if ((sheldon[2] == 's') && ((raj[2] == 'p') || (raj[2] == 'g')))
                printf("Caso #%d: Bazinga!\n", i++);
            else if ((sheldon[2] == 'g') && ((raj[2] == 'o') || (raj[2] == 'p')))
                printf("Caso #%d: Bazinga!\n", i++); 
            else if ((sheldon[2] == 'o') && ((raj[2] == 's') || (raj[2] == 'd')))
                printf("Caso #%d: Bazinga!\n", i++);
            else 
                printf("Caso #%d: Raj trapaceou!\n", i++);
        } 
    }

 	   return 0;
}