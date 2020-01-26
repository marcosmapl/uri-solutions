/*
URI Online Judge | 2165
Twitting
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2165

Timelimit: 1
Twitter microblog is known for restricting its posts at 140 characters. Your task is to check if a text will fit in a tweet.

Input
Input is a text line T (1 ≤ |T| ≤ 500).

Output
The output is given in a single line. It must be "TWEET" (without quotes) if the text line T is up to 140 characters long. If T has more than 140 characters, the output must be "MUTE".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 254 Bytes
@submission 1/25/20, 12:29:35 AM
*/
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned short n = 0;
    
    while (getchar() != '\n')
        n++;
        
    if (n > 140)
        printf("MUTE\n");
    else 
        printf("TWEET\n");
        
    return 0;
}
