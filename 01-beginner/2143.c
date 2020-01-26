/*
URI Online Judge | 2143
The Return of Radar
By Joao Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2143

Timelimit: 1
Every year after the contest that takes place in Taxiland, contestants and coaches go to the famous and renowned restaurant Radar. However, the waiters (always very kind and polite) get overwhelmed due to the amount of people, and therefore, end up taking a while to serve them.

Contestants or coaches who sit at the ends are the lucky ones, because they order only once and are served right away, but the others must always order twice, because the waiters (always very kind and polite) are careless and easily forget the orders. Besides, there's a superstition going on among the contestants and coaches that if there's not an even amount of people who don't sit at the ends, none of the university's teams will win the next contest.

So your task is to determine the sum of the number of of orders of each one to know if it's worth going to Radar. But whatever the result is, remember: it's always worth going to Radar!

Input
The input consists of the integer T (1 ≤ T ≤ 100) indicating the number of test cases and then, T integers N (3 ≤ N ≤ 104) indicating the number of people. The table is rectangular and there will be at least and at most one person at one end, i.e., if an end is empty, the other must be occupied, otherwise, the two ends must be occupied, but the number of people that are not at the ends must always be even. Read input until T = 0.

Output
Print the sum of the number of orders of each person. There's no newline between the test cases.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 423 Bytes
@submission 1/24/20, 10:30:19 PM
*/
#include <stdio.h>

int main()
{
    unsigned char t;
    unsigned short n;
    
    scanf("%hhu", &t);
    while (t) {
        
        for (;t;t--) {
            scanf("%hu", &n);
            if (n % 2)
                n += (n-1);    
            else
                n += (n-2);
                
            printf("%hu\n", n);
        }
        
        scanf("%hhu", &t);
    }

    return 0;
}
