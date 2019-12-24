/*
URI Online Judge | 1131
Grenais
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1131

Timelimit: 1

The Federação Gaúcha de Futebol invited you to write a program to present a statistical result of several GRENAIS. Write a program that read the number of goals scored by Inter and the number of goals scored by Gremio in a GRENAL. Write the message "Novo grenal (1-sim 2-nao)" and request a response. If the answer is 1, two new numbers must be read (another input case) asking the number of goals scored by the teams in a new departure, otherwise the program must be finished, printing:

- How many GRENAIS were part of the statistics.
- The number of victories of Inter.
- The number of victories of Gremio.
- The number of Draws.
- A message indicating the team that won the largest number of GRENAIS (or the message: "Não houve vencedor" if both team won the same quantity of GRENAIS).

Input
The input contains two integer values​​, corresponding to the goals scored by both teams. Then there is an integer (1 or 2), corresponding to the repetition of the algorithm.

Output
After each reading of the goals it must be printed the message "Novo grenal (1-sim 2-nao)". When the program is finished, the program must print the statistics as the example below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 791 Bytes
@submission 12/10/19, 12:13:20 PM
*/
#include <stdio.h>

int main()
{
    unsigned int inter = 0, gremio = 0, emp = 0;
    unsigned int a = 0, b = 0;
    int op;
    
    do {
        op = 0;
        scanf("%d %d", &a, &b);
        if (a > b)
            inter++;
        else if (a < b)
            gremio++;
        else
            emp++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
    } while (op == 1);
    printf("%d grenais\n", (inter+gremio+emp));
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", emp);
    if (inter > gremio)
        printf("Inter venceu mais\n");
    else if (gremio > inter)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}