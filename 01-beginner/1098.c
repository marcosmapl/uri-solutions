/*
URI Online Judge | 1098
Sequence IJ 4
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1098

Timelimit: 1

Make a program that prints the sequence like the following example.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 451 Bytes
@submission 12/8/19, 9:27:12 AM
*/
#include <stdio.h>

int main(void) {
    unsigned int z=0, i = 0, j = 1;
    
    for (; z < 3; z++) {
        for (; i < 10; i += 2) {
            for (;j<4; j++)
                if (i)
                    printf("I=%d.%d J=%d.%d\n",z,i,(j+z),i);
                else
                    printf("I=%d J=%d\n",z,(z+j));
            j = 1;
            if (z == 2)
                break;
        }
        i = 0;
    }
    return 0;
}