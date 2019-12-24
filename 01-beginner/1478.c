/*
URI Online Judge | 1478
Square Matrix II
By Josué Pereira de Castro, Unioeste  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1478

Timelimit: 1

Write a program that read an integer number N (0 ≤ N ≤ 100) that correspont to the order of a Bidimentional array of integers, and build the Array according to the above example.

Input
The input consists of several integers numbers, one per line, corresponding to orders from arrays to be built. The end of input is indicated by zero (0).

Output
For each integer number of input, print the corresponding array according to the example. (the values ​​of the arrays must be formatted in a field of size 3 right justified and separated by a space. None space must be printed after the last character of each row of the array. A blank line must be printed after each array.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.076s
@size 907 Bytes
@submission 12/23/19, 12:56:32 AM
*/
#include <stdio.h>
#include <stdlib.h>

void gerarMatrixN(unsigned int n) {
    unsigned int i,j, dec;
    int **mat;
    
    mat = (int **)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++) 
        mat[i] = (int *)malloc(n * sizeof(int));
    
    for (i = 0; i < n; i++) {
        dec = i+1;
        for(j = 0; j < n; j++,dec--)
            mat[i][j] = dec;
    }
    
    for (i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            mat[i][j] = mat[j][i];
          
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++)
            printf("%3d ", mat[i][j]);
        printf("%3d\n", mat[i][j]);
    }
    printf("\n");
    
    for(i = 0; i < n; i++) 
        free(mat[i]);
    free(mat);   
}

int main()
{
    unsigned int n;
    
    scanf("%u", &n);
    while(n) {
        gerarMatrixN(n);
        scanf("%u", &n);
    }
    return 0;
}