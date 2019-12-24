/*
URI Online Judge | 1186
Below the Secundary Diagonal
By Neilor Tonin, URI  Brazil

Timelimit: 1
Read an uppercase character that indicates an operation that will be performed in an array M[12][12]. Then, calculate and print the sum or average considering only that numbers that are below of the Secundary diagonal of the array, like shown in the following figure (green area).
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1186.png

Input
The first line of the input contains a single uppercase character O ('S' or 'M'), indicating the operation Sum or Average (Média in portuguese) to be performed with the elements of the array. Follow 144 floating-point numbers of the array.

Output
Print the calculated result (sum or average), with one digit after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 461 Bytes
@submission 12/22/19, 7:02:23 PM
*/
#include <stdio.h>

int main()
{
    double m[12][12];
    double sum = 0.0;
    unsigned char c,i,j;
    char t;
    
    scanf("%c", &t);
    
    for (i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);
            
    for (i = 0; i < 12; i++)
        for(j = (12-i); j < 12; j++)
            sum += m[i][j];
    
    if (t == 'M')
        sum /= 66.0;

    printf("%.1lf\n", sum);
    return 0;
}