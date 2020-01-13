/*
URI Online Judge | 2006
Identifying Tea
By Inês Kereki UY Uruguay
https://www.urionlinejudge.com.br/judge/en/problems/view/2006

Timelimit: 1
Blind tea tasting is the skill of identifying a tea by using only your senses of smell and taste.

As part of the Ideal Challenge of Pure-Tea Consumers (ICPC), a local TV show is organized. During the show, a full teapot is prepared and five contestants are handed a cup of tea each. The participants must smell, taste and assess the sample so as to identify the tea type, which can be: (1) white tea; (2) green tea; (3) black tea; or (4) herbal tea. At the end, the answers are checked to determine the number of correct guesses.

Given the actual tea type and the answers provided, determine the number of contestants who got the correct answer.

Input
The first line contains an integer T representing the tea type (1 ≤ T ≤ 4). The second line contains five integers A, B, C, D and E, indicating the answer given by each contestant (1 ≤ A, B, C, D, E ≤ 4).

Output
Output a line with an integer representing the number of contestants who got the correct answer.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 251 Bytes
@submission 1/7/20, 8:36:43 AM
*/
#include <stdio.h>

int main()
{
    unsigned char t, r, n = 0, i;

    scanf("%hhu", &t);
    
    for (i=0;i<5;i++) {
        scanf("%hhu", &r);
        if (t == r)
            n++;
    }
    printf("%hhu\n", n);
    
    return 0;
}