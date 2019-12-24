/*
URI Online Judge | 1182
Column in Array
By Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1182

Timelimit: 1

Your job in this problem is to read a number that is a column of an array where an operation will be performed, an uppercase character, indicating the operation to be performed and all elements of a bidimentional array M[12][12]. Then, you have to calculate and print the sum or average of all elements within the green area according to the case. The following figure illustrates the case when is entered the number 5 to the array column, showing all elements that must be considered in the operation.
<img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1182.png" alt="Matrix column 6 selected in green">

Input
The first line of the input contains a simple integer C (0 ≤ C ≤ 11) indicating the column to be considered in the operation. The second line of the input contains a single uppercase character T ('S' or 'M'), indicating the operation Sum or Average (Média in portuguese) to be performed with the elements of the array. Follow 144 floating-point numbers of the array.

Output
Print the calculated result (sum or average), with one digit after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 430 Bytes
@submission 12/22/19, 6:43:20 PM
*/
#include <stdio.h>

int main()
{
    double m[12][12];
    double sum = 0.0;
    unsigned char c,i,j;
    char t;
    
    scanf("%hhu", &c);
    scanf(" %c", &t);
    
    for (i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);
    for (i = 0; i < 12; i++)
        sum += m[i][c];
    
    if (t == 'M')
        sum /= 12.0;

    printf("%.1lf\n", sum);
    return 0;
}