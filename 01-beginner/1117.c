/*
URI Online Judge | 1117
Score Validation
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Write a program that reads two scores of a student. Calculate and print the average of these scores. Your program must accept just valid scores [0..10]. Each score must be validated separately.

Input
The input file contains many floating-point numbers​​, positive or negative. The program execution will be finished after the input of two valid scores.

Output
When an invalid score is read, you should print the message "nota invalida".
After the input of two valid scores, the message "media = " must be printed followed by the average of the student. The average must be printed with 2 numbers after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 388 Bytes
@submission 12/10/19, 9:11:42 AM
*/
#include <stdio.h>

int main()
{
    double nota, media = 0.0;
    unsigned char c = 2;
    
    
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

    return 0;
}