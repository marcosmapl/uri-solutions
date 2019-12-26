/*
URI Online Judge | 1564
Brazil World Cup
By Gabriel Dalalio, ITA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1564

Timelimit: 1

Brazil is the country hosting the world cup this year. However, there are many people protesting against the government. In social networks you can see people saying the world cup will not happen.

But these rumors that there will be no world cup are totally false, president Dilma Rousseff has warned: the world cup will happen, and if someone complains about it, we will host again!

Input
The input contains several test cases and ends with EOF. Each test case consists of a line containing a number N of complaints about the world cup forwarded to the president (0 ≤ N ≤ 100).

Output
For each test, the output consists of one line saying "vai ter copa!" if there is no complaints for president. If there are complaints, the output should say "vai ter duas!".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 244 Bytes
@submission 25/12/2019 23:10:57
*/
#include <stdio.h>

int main()
{
    unsigned char n;
    
    while(scanf("%hhu", &n) != EOF) {
        if (n == 0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }

    return 0;
}