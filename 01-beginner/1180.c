/*
URI Online Judge | 1180
Lowest Number and Position
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1180

Timelimit: 1

Write a program that reads a number N. This N is the size of a array X[N]. Next, read each of the numbers of X, find the smallest element of this array and its position within the array, printing this information.

Input
The first line of input contains one integer N (1 < N <1000), indicating the number of elements that should be read to an array X[N] of integer numbers. The second row contains each of the N values, separated by a space.

Output
The first line displays the message “Menor valor:” followed by a space and the lowest number read in the input. The second line displays the message “Posicao:” followed by a space and the array position in which the lowest number is, remembering that the array starts at the zero position.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 413 Bytes
@submission 12/22/19, 6:27:01 PM
*/
#include <stdio.h>

int main()
{
    unsigned short n, i, pos = 0;
    int menor, valor;
    
    scanf("%hu", &n);
    scanf("%d", &valor);
    menor = valor;
    for (i = 1; i < n; i++) {
        scanf("%d", &valor);
        if (valor < menor) {
            pos = i;
            menor = valor;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %hu\n", pos);
    
}