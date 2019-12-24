/*
URI Online Judge | 1072
Interval 2
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1072

Timelimit: 1

Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.
 
Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases.
Each case is an integer number X (-107 < X < 107).

Output
For each test case, print how many numbers are in and how many values are out of the interval.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 360 Bytes
@submission 12/7/19, 2:26:41 PM
*/
#include <stdio.h>

int main()
{
    int n,v;
    unsigned int ci = 0, co = 0;

    scanf("%d", &n);
    
    do {
        scanf(" %d", &v);
        if ((v >= 10) && (v <= 20))
            ci++;
        else
            co++;
            
    } while (--n);
    
    printf("%d in\n", ci);
    printf("%d out\n", co);
    
    return 0;
}