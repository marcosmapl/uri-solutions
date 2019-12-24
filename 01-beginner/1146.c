/*
URI Online Judge | 1146
Growing Sequences
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1146

Timelimit: 2

Your program must read an integer X indefinited times (the program must stop when X is equal to zero). For each X print the sequence from 1 to X, with one space between each one of these numbers.

PS: Be carefull. Don't leave any space after the last number of each line, otherwise you'll get Presentation Error.

Input
The input file contains many integer numbers. The last one is zero.

Output
For each number N of the input file, one output line must be printed, from 1 to N like the following example. Be careful with blank spaces after the last line number.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.180s
@size 264 Bytes
@submission 12/10/19, 1:31:10 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n,i=1;
    
    scanf("%u", &n);
    while (n) {
        while(i < n)
            printf("%d ",i++);
        printf("%d\n", i);
        scanf("%u", &n);
        i = 1;
    }
    
    return 0;
}
