/*
URI Online Judge | 2160
Name at Form
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2160

Timelimit: 1
Filling forms is a simple task. But it is necessary to check if the reserved space for data is large enough.

Your task is, given a text line, to indicate if it fits in an 80 characters length form.

Input
Input is a text line L (1 ≤ |L| ≤ 500).

Output
The output is given in a single line. It must be "YES" (without quotes) if the text line L is up to 80 characters long. If L has more than 80 characters, the output must be "NO".	

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 249 Bytes
@submission 1/24/20, 11:07:09 PM
*/
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned short n = 0;
    
    while (getchar() != '\n')
        n++;
        
    if (n > 80)
        printf("NO\n");
    else 
        printf("YES\n");
        
    return 0;
}
