/*
URI Online Judge | 1142
PUM
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1142

Timelimit: 1

Write a program that reads an integer N. This N is the number of output lines printed by this program.

Input
The input file contains an integer N.

Output
Print the output according to the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 209 Bytes
@submission 12/10/19, 12:38:12 PM
*/
#include <stdio.h>

int main()
{
    int l = 0, n = 1;
    
    scanf("%d", &l);
    while (l--) {
        printf("%d %d %d PUM\n", n, (n+1), (n+2));
        n += 4;
    }
    
    return 0;
}