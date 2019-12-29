/*
URI Online Judge | 1827
Square Array IV
By Neilor Tonin, URI BR Brazil

https://www.urionlinejudge.com.br/judge/en/problems/view/1827

Timelimit: 1
Your work in this program is to read an integer number that is the size of a square matrix (width and height) to be filled as follows: the outer part is filled with 0 in the inner part is filled with 1, the main diagonal is filled with 2, the secondary diagonal is filled with 3 and the central element is 4, as the examples below.

Obs: square with '1' always starts at position size / 3, considering width and height and both begin in 0 (zero).

Input
The input contains a number of test cases and ends with EOF (end of file). Each test case consists of an odd integer number N (5 ≤ N ≤ 101) that is the size of the array. For each test case, print the corresponding array as below. After each test case, print a blank line.

Output
For each test case, print the corresponding array as below. After each test case, print a blank line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.172s
@size 1.12 KB
@submission 12/27/19, 7:40:28 AM
*/
#include <stdio.h>
#include <stdlib.h>

void gerarMatrix(unsigned char n) {
    unsigned char i,j;
    unsigned char **mat;
    
    mat = (unsigned char **)malloc(n * sizeof(unsigned char *));
    for(i = 0; i < n; i++) 
        mat[i] = (unsigned char *)malloc(n * sizeof(unsigned char));
    
    // fill with zeros
    for (i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            mat[i][j] = 0;
    
    // main and secondary diagonal
    for (i = 0; i < n; i++) {
        mat[i][i] = 2;
        mat[i][n-i-1] = 3;
    }
    
    // inner square
    for (i = (n/3); i < n-(n/3); i++)
        for (j = (n/3); j < n-(n/3); j++) {
            mat[i][j] = 1;
        }
    
    // central element
    mat[n/2][n/2] = 4;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++)
            printf("%d", mat[i][j]);
        printf("%d\n", mat[i][j]);
    }
    printf("\n");
    
    for(i = 0; i < n; i++) 
        free(mat[i]);
    free(mat);   
}

int main()
{
    unsigned char n;
    
    while(scanf("%hhu", &n) != EOF) {
        gerarMatrix(n);
    }

    return 0;
}