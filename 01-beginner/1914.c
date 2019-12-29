/*
URI Online Judge | 1914
Whose Turn Is It?
By Jadson José Monteiro Oliveira, Faculdade de Balsas BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1914

Timelimit: 1

Hopscotch is probably the game where townhouse's children more have fun, however the game has caused a good time for discussion and crying in children who practice it. The cause of the disorder is to decide who will be the next to jump, but recently Quico (The Genius!) had a great idea for to solve the problem. Basically the game can only to be played every two players in one turn and to choose the next player Quico indicated to use the traditional method even or odd, where both players report one number and if the sum these numbers is even, the player that choose PAR win or vice verse. However the use that method has left the Quico crazy, crazy, crazy... And for that reason he asked for your help, asked you a program that given the name of the players, their respective choices (PAR or IMPAR) and the numbers, tell who was the winner.

Input
The first line of input contains a single integer QT (1 ≤ QT ≤ 100), indicating the number of following test cases. Each test case contains two lines. In first line will be told the name of the player 1 followed by his choice, “PAR” or “IMPAR”, and after the name of the player 2 followed by his choice, “PAR” or “IMPAR”. In second line of test case, contains two integer number N (1 ≤ N ≤ 10⁹) and M (1 ≤ M ≤ 10⁹), representing respectively the numbers chosen by players 1 and player 2. It it garanteed that player 1 choice's (PAR or IMPAR) will be differ from choice of player 2 (PAR or IMPAR) and that the name of the players consist only of letters and will not exceed 100 characters.

Output
For each test case, print a single line containing the name of winner player.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 617 Bytes
@submission 12/28/19, 5:36:08 PM
*/
#include <stdio.h>

int main()
{
    char j1[101], j2[101], op[6];
    unsigned int n1,n2;
    unsigned char qt;
    
    scanf("%hhu", &qt);
    while (qt--) {
        scanf("%s %s %s %s", &j1, &op, &j2, &op);
        scanf("%u %u", &n1, &n2);
        
        n1 += n2;
        if (n1 % 2) {
            if (op[0] == 'I')
                printf("%s\n", &j2);
            else
                printf("%s\n", &j1);
        } else {
            if (op[0] == 'P')
                printf("%s\n", &j2);
            else
                printf("%s\n", &j1);
        }
    }
    
    return 0;
}