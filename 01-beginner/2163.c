/*
URI Online Judge | 2163
The Force Awakens
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2163

Timelimit: 1
A long time ago, in a galaxy far, far away...

After the decline of the Empire, scavengers are spread around the universe looking for a lost lightsaber. Everyone knows that a lightsaber emits an unique wave pattern: 42 surrounded by 7 all around. You have a wave sensor that scans a terrain with N x M cells. Look at the example below for an 4 x 7 terrain with a lightsaber in it (at position (2,4)).
https://resources.urionlinejudge.com.br/gallery/images/contests/935.png

You must write a program that, given an N x M terrain, looks for the lightsaber pattern in it. No scan have more than one lightsaber pattern.

Input
The first line of the input has two positive integers N and M, representing respectively the number of rows and the number of columns scanned in a terrain (3 ≤ N, M ≤ 1000). Each of the next N lines have M integers, describing the values scanned in each cell of the terrain (-100 ≤ Tij ≤ 100, for 1 ≤ i ≤ N and 1 ≤ j ≤ M).

Output
The output is a single line with 2 integers X and Y separated by one space. They represent the (X,Y)-coordinate of the lightsaber, if it is found. If the terrain doesn't have a lightsaber pattern, X and Y are both zero.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 802 Bytes
@submission 1/25/20, 12:04:39 AM
*/
#include <stdio.h>

int main()
{
    unsigned short n, m, i, j;
    
    scanf("%hu %hu", &n, &m);
    char t[n][m];
    
    for (i=0; i<n; i++)
    for (j=0; j<m; j++)
        scanf("%hhu", &t[i][j]);
        
    n -= 1;
    m -= 1;
    
    for (i=1; i<n; i++)
    for (j=1; j<m; j++)
        if (t[i][j] == 42) {
            if ((t[i-1][j-1] == 7) &&
                (t[i-1][j] == 7) &&
                (t[i-1][j+1] == 7) &&
                (t[i][j-1] == 7) &&
                (t[i][j+1] == 7) &&
                (t[i+1][j-1] == 7) &&
                (t[i+1][j] == 7) &&
                (t[i+1][j+1] == 7)) {
                    printf("%hu %hu\n", i+1, j+1);
                    return 0;
                }
        }
        
    printf("0 0\n");
    return 0;
}
