/*
URI Online Judge | 1013
The Greatest
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1013
Timelimit: 1

Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
<img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1013.png" alt="Greatest Formula">
Input
The input file contains 3 integer values.

Output

Print the greatest of these three values followed by a space and the message “eh o maior”.
@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 256 Bytes
@submission 5/22/18, 8:51:58 AM
*/
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b) {
    return (a + b + abs(a-b)) / 2;
}

int main() {
 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d eh o maior\n", maior( maior(a,b), c));
 
    return 0;
}