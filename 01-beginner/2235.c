/*
URI Online Judge | 2235
Walking in Time
By Maratona de Programação SBC BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2235

Timelimit: 1
Imagine you have a time machine that can be used up to three times, and every use of the machine you can choose to go back to the past or go to the future. The machine has three fixed loans; each credit represents a certain number of years, and can be used to get this amount of years for the past or for the future. You can make one, two or three trips, and each of these three credits can only be used once. For example, if the credits are 5, 12 and 9, you could decide to make two trips: go five years into the future and then go back nine years to the past. This way, you end four years in the past, in 2012. It could also make three trips, all going to the future, using the credits in any order, ending in 2042.

In this problem, given the values of the three machine credits, your program should say if is possible or not travel back in time and return to the present, making at least one trip and at most three trips; always using each of the three credit at most once.

Input
The input consists of a single line containing three credits A, B e C (1 ≤ A, B, C ≤ 1000).

Output
Your program should print a line containing the character 'S' if it possible travel in time and back to present, or 'N' if it's not possible.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 443 Bytes
@submission 1/27/20, 8:39:26 AM
*/
#include <stdio.h>

int main()
{
    char i,j,k;
    short n[3];
    
    scanf("%hd %hd %hd", &n[0], &n[1], &n[2]);
    for (i=-1; i<2; i++)
    for (j=-1; j<2; j++)
    for (k=-1; k<2; k++) {
        if ((i == 0) && (j == 0) && (k == 0)) {
            continue;
        } else if ((i*n[0])+(j*n[1])+(k*n[2]) == 0) {
            printf("S\n");
            return 0;
        }
    }
    
    printf("N\n");
    return 0;
}