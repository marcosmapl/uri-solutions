/*
URI Online Judge | 2059
Odd, Even or Cheating
By Marianne Linhares, UFCG BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2059

Timelimit: 1
A new game called Odd, Even or Cheating is currently (OEC) is now one of the most popular games in the world. This game was created when some friends had no internet connection, no cellphone, no computer, and pretty much nothing to do. The game is so popular that is going to happen the mundial championship of OEC and each country of the world will choose a representant to compete in this championship.

The game works like this: it's a two players game, the player 1 chooses between odd or even, then each player chooses a positive integer, if the sum of these number is even and player 1 chose even, then player 1 wins, if the sum is odd and player 2 chose odd, then player 2 wins. If player 1 chooses odd he/she wins when the sum is odd, and player 2 wins when the sum is even. Nothing new, right?

But now there are two more possible moves, player 1 can cheat to make sure that he/she wins independently of the result of the conventional odd or even game, and player 2 can accuse player 1 of cheating. With these additions in the game if player 1 cheats and player 2 accuses him/her of cheating player 2 wins, if player 2 don't accuse and player 1 is cheating then player 1 wins, if player 2 accuses the cheat, but player 1 is not cheating then player 1 wins, if player 1 isn't cheating and player 2 doesn't accuse player 1 then the game will be played as described previously.

You were hired by OECIO (Odd, Even or Cheating International Organization) to develop a program that given an OEC match it determines the winner.

Input
The input consists of one line with 5 integers: p, j1, j2, r, a. ( 0 ≤ p, r, a ≤ 1 e 1 ≤ j1, j2 ≤ 100).

p is the player 1 choice (if p = 1 then player 1 chooses even, if p = 0 then player 1 chooses odd). j1, j2, represents respectively the numbers that player 1 chose and the number that player 2 chose. r represents if player 1 cheated (if r = 1 then player 1 cheated, if r = 0 then he/she did not), a represents if player 2 accused player 1 of cheating (if a = 1 then he/she did, if a = 0 then he/she did not).

Output
Print "Jogador 1 ganha!" if player 1 won or "Jogador 2 ganha!" if player 2 won (no quotation marks).

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 439 Bytes
@submission 1/13/20, 12:08:30 AM
*/
#include <stdio.h>
int main()
{
    int p, j1, j2, r, a, win, sum;
    
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    
    sum = j1 + j2;
    
    if((sum%2==0 && p==1) || (sum%2==1 && p==0)) 
        win = 1;
    else 
        win = 2;
    
    if((r==1 && a==0) || (r==0 && a==1)) 
        win = 1;
    else if(r==1 && a==1) 
        win=2;
    
    printf("Jogador %d ganha!\n", win);
    
    return 0;
}