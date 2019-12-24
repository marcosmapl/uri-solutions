/*
URI Online Judge | 1534
Array 123
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1534

Timelimit: 1

Read an integer N that is the size of a bidimentional array that must be printed like the given example.

Input
The input contains many test cases and ends with EOF. Each test case consist in a integer number N (3 ≤ N < 70), that indicates the size (lines and columns) of a bidimentional array that must be printed.

Output
For each N read, print the output according to the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.016s
@size 853 Bytes
@submission 12/23/19, 2:34:21 PM
*/
#include <stdio.h>
#include <stdlib.h>

void gerarMatrix123(short n) {
    unsigned short i,j;
    unsigned char **mat;
    
    mat = (unsigned char **)malloc(n * sizeof(unsigned char*));
    for(i = 0; i < n; i++) 
        mat[i] = (unsigned char *)malloc(n * sizeof(unsigned char));
    
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            mat[j][i] = 3;
    
    for (i = 0; i < n; i++) {
        mat[i][i] = 1;
        mat[i][n-i-1] = 2;
    }
          
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++)
            printf("%d", mat[i][j]);
        printf("%d\n", mat[i][j]);
    }
    
    for(i = 0; i < n; i++) 
        free(mat[i]);
    free(mat);   
}

int main()
{
    short n;
    
    while(scanf("%hd", &n) != EOF) {
        gerarMatrix123(n);
    }
    return 0;
}