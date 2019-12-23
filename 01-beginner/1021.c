/*
URI Online Judge | 1021
Banknotes and Coins
By Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1021

Timelimit: 1

Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 2.03 KB
@submission 7/20/18, 6:32:56 PM
*/
#include <stdio.h>
#include <math.h>
 
int main() {
    double valor;
    // vai armazenar a parte iteira do valor
    unsigned int inteira;
    // vai armazenar a parte fracionaria do valor
    unsigned int fracao;
    
    scanf("%lf", &valor);

    // converte o "valor" para inteiro, ou seja, pega somenta a parte inteira.
    // e.g. (int) 576.7356 = 576
    inteira = (int) valor;

    // deixa apenas a parte fracionaria do valor
    // 576.73 - 576 = 0.7356
    valor -= inteira;

    // pega a parte fracionaria do valor
    // eg. (int)(0.7356 * 100) = 73
    // vai ser sempre um valor entre 0-99.
    fracao = round((valor * 100));

    // a logica toda da questao terminou na linha acima,
    // daqui pra frente eh apenas manipulação algébrica e saída.
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", inteira / 100);
    
    inteira -= (inteira / 100) * 100;
    
    if (inteira > 50) {
        printf("1 nota(s) de R$ 50.00\n");
        inteira -= 50;
    } else {
        printf("0 nota(s) de R$ 50.00\n");
    }
    
    printf("%d nota(s) de R$ 20.00\n", inteira / 20);

    inteira -= (inteira / 20) * 20;
    printf("%d nota(s) de R$ 10.00\n", inteira / 10);

    inteira -= (inteira / 10) * 10;
    printf("%d nota(s) de R$ 5.00\n", inteira / 5);

    inteira -= (inteira / 5) * 5;
    printf("%d nota(s) de R$ 2.00\n", inteira / 2);

    // segue os mesmo padrao para as moedas
    printf("MOEDAS:\n");
    inteira -= (inteira / 2) * 2;
    printf("%d moeda(s) de R$ 1.00\n", inteira);

    if (fracao > 50) {
        printf("1 moeda(s) de R$ 0.50\n");
        fracao -= 50;
    } else {
        printf("0 moeda(s) de R$ 0.50\n");
    }

    printf("%d moeda(s) de R$ 0.25\n", fracao / 25);

    fracao -= (fracao / 25) * 25;
    printf("%d moeda(s) de R$ 0.10\n", fracao / 10);

    fracao -= (fracao / 10) * 10;
    printf("%d moeda(s) de R$ 0.05\n", fracao / 5);

    fracao -= (fracao / 5) * 5;
    printf("%d moeda(s) de R$ 0.01\n", fracao);
 
    return 0;
}