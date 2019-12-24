/*
URI Online Judge | 1175
Array change I
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1175

Timelimit: 1

Write a program that reads an array N [20]. After, change the first element by the last, the second element by the last but one, etc.., Up to change the 10th to the 11th. print the modified array.

Input
The input contains 20 integer numbers, positive or negative.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 371 Bytes
@submission 12/22/19, 4:26:34 PM
*/
#include <stdio.h>

int main()
{
    int x[20], temp;
    unsigned char i = 0;
    
    for (; i < 20; i++) {
        scanf("%d", &x[i]);
    }
    for (i = 0;i < 10; i++) {
        temp = x[i];
        x[i] = x[19-i];
        x[19-i] = temp;
    }
    for (i = 0; i < 20; i++) {
        printf("N[%hhu] = %d\n", i, x[i]);
    }
    
    return 0;
}