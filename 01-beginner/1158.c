/*
URI Online Judge | 1158
Sum of Consecutive Odd Numbers III
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1158

Timelimit: 1

Read an integer N that is the number of test cases that follows. Each test case contains two integers X and Y. Print one output line for each test case that is the sum of Y odd numbers from X including it if is the case. For example:
for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13
for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13

Input
The first line of the input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

Output
Print the sum of all consecutive odd numbers from X.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 290 Bytes
@submission 12/11/19, 3:46:09 AM
*/
#include <stdio.h>

int main()
{
    unsigned int n;
    int x,y;
    
    scanf("%d", &n);
    
    do {
        scanf("%d %d", &x, &y);
    
        if (x % 2 == 0)
            x++;
    
        printf("%d\n", (x*y)+(y*(y-1)));
    } while (--n);
    
    return 0;
}