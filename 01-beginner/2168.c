/*
URI Online Judge | 2168
Twilight at Portland
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2168

Timelimit: 1
At Twilight the Portland city is full of vampires and werewolves. However, none of them wants to be seen while walking downtown.

At each corner of Portland downtown, one surveillance camera will be installed. A monthly updated map with all working cameras is made available at City Hall website. 

A block is considered safe if there is at least two working cameras in its four corners. At Portland downtown all the blocks are squares with the same size.

Your task is, given the working cameras map, to indicate the status of all downtown blocks.

Input
The first line of input has a positive integer N (1 ≤ N ≤ 100). For the next N+1 lines there are N+1 numbers in each, indicating, for each corner, the presence or absence of a working surveillance camera. The number 1 represents a working camera at that corner, and the number zero represents there is no working camera in that corner.

Output
The output is given in N lines. Each line has N characters, indicating whether the corresponding block is safe or unsafe. If a block is safe, you must print the character S; if it is not safe, print the character U.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 554 Bytes
@submission 1/26/20, 7:46:47 PM
*/
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char n, i, j;
    
    scanf("%hhu", &n);
    n++;
    unsigned char m[n][n];
    
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            scanf("%hhu", &m[i][j]);
        
    n--;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if ((m[i][j]+m[i][j+1]+m[i+1][j]+m[i+1][j+1]) > 1) {
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;
}