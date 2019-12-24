/*
URI Online Judge | 1557
Square Matrix III
By Gabriel Dalalio, ITA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1557

Timelimit: 1

Write a program that read an integer number N (0 ≤ N ≤ 15) that correspont to the order of a bidimentional array of integers, and build the array according to the above example.

Input
The input consists of several integers numbers, one per line, corresponding to orders from arrays to be built. The end of input is indicated by zero (0).

Output
For each integer number of input, print the corresponding array according to the example. The values ​​of the array must be formatted in a field of size T right justified and separated by a space, where T is equal to the number of digits of the biggest number in the array. None space must be printed after the last character of each row of the array. A blank line must be printed after each array.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 621 Bytes
@submission 12/24/19, 11:08:05 AM
*/
#include <stdio.h>
#include <math.h>

void gerarMatrix(unsigned char n) {
    unsigned char i,j;
    unsigned int max, head = 1, next;
    
    max = pow(2, ((2*n)-2));
    max= log10(max)+1;
    
    for (i = 0; i < n; i++) {
        next = head;
        for (j = 0; j < n-1; j++) {
            printf("%*d ", max, next);
            next <<= 1;
        }
        printf("%*d\n", max, next);
        head <<= 1;
    }
    printf("\n");
}

int main()
{
    unsigned char n;
    
    scanf("%hhu", &n);
    while(n) {
        gerarMatrix(n);
        scanf("%hhu", &n);
    }
    return 0;
}