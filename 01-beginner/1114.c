/*
URI Online Judge | 1114
Fixed Password
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1114

Timelimit: 1

Write a program that keep reading a password until it is valid. For each wrong password read, write the message "Senha inválida". When the password is typed correctly print the message "Acesso Permitido" and finished the program. The correct password is the number 2002.

Input
The input file contains several tests cases. Each test case contains only an integer number.

Output
For each number read print a message corresponding to the description of the problem.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 245 Bytes
@submission 12/8/19, 10:07:29 AM
*/
#include <stdio.h>
 
int main() {
 
    int senha;
    
    scanf("%d", &senha);
    while (senha != 2002) {
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    printf("Acesso Permitido\n");
 
    return 0;
}