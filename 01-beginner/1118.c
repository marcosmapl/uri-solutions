/*
URI Online Judge | 1118
Several Scores with Validation
By Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1118

Timelimit: 1

Write an program to read two scores of a student. Calculate and print the semester average. The program must accept only valid scores (a score must fit in the range [0.10]). Each score must be validated separately.

The program must print a message "novo calculo (1-sim 2-nao)" that means "new calculate (1-yes 2-no)". After, the input will be (1 or 2). 1 means a new calculation, 2 means that the execution must be finished.

Input
The input file contains several positive or negative floating-point (double) values​. After the input of 2 valid scores, an integer number X will be read. Your program must stop when X = 2.

Output
If an invalid score is read, must be printed the message "nota invalida". When two valid scores are read, the message "media = " must be printed folowed by the average between these 2 scores. The message "novo calculo (1-sim 2-nao)" must be printed after reading X. This message should be displayed again if the standard input number for X is less than 1 or greater than 2, as example below.

The output average must be printed with 2 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 669 Bytes
@submission 12/10/19, 11:42:57 AM
*/
#include <stdio.h>

int main()
{
    double nota, media;
    int c, op;
    
    do {
        media = 0.0;
        c = 2;
        op = 0;
        do {
            scanf("%lf", &nota);
            if ((nota < 0.0) || (nota > 10.0)) {
                printf("nota invalida\n");
            } else {
                media += nota;
                --c;
            }
        } while (c);
        
        printf("media = %.2lf\n", media / 2.0);
        
        while ((op != 1) && (op != 2)) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
            
        } 
    } while (op == 1);

    return 0;
}