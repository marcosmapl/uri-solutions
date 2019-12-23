/*
URI Online Judge | 1050
DDD
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1050

Timelimit: 1

Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:
61		Brasilia
71		Salvador
11		Sao Paulo
21		Rio de Janeiro
32		Juiz de Fora
19		Campinas
27		Vitoria
31		Belo Horizonte

If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language.

Input
The input consists in a unique integer number.

Output
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 795 Bytes
@submission 12/7/19, 1:07:34 PM
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    switch (n) {
        case 11:
            printf("Sao Paulo\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 61:
            printf("Brasilia\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
    return 0;
}