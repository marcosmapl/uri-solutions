/*
URI Online Judge | 1080
Highest and Position
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1080

Timelimit: 1

Read 100 integer numbers. Print the highest read value and the input position.

Input
The input file contains 100 distinct positive integer numbers.

Output
Print the highest number read and the input position of this value, according to the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 338 Bytes
@submission 12/8/19, 8:03:37 AM
*/
#include <stdio.h>

int main(void) {
    int n, v, pos;
    unsigned char c;
    
    scanf("%d", &n);
    v = n;
    pos = 0;
    for (c = 1; c < 100; c++) {
        scanf("%d", &n);
        if (n > v) {
            v = n;
            pos = c;
        }
    }
    printf("%d\n%d\n", v, (pos+1));
    

    return 0;
}