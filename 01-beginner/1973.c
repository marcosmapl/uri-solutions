/*
URI Online Judge | 1973
Star Trek
By Leandro Zatesko, UFFS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1973

Timelimit: 1

After buying many adjacent farms at the west region of Santa Catarina, the Star family built a single road which passes by all farms in sequence. The first farm of the sequence was named Star 1, the second Star 2, and so on. However, the brother who lives in Star 1 has got mad and decided to make a Star Trek in order to steal sheep from the proprieties of his siblings. But he is definitely crazy. When passes by the farm Star i, he steals only one sheep (if there is any) from that farm and moves on either to Star i + 1 or Star i - 1, depending on whether the number of sheep in Star i was, respectively, odd or even. If there is not the Star to which he wants to go, he halts his trek. The mad brother starts his Star Trek in Star 1, stealing a sheep from his own farm.

Input
The first input line consists of a single integer N (1 ≤ N ≤ 106), which represents the number of Stars. The second input line consists of N integers, such that the ith integer, Xi (1 ≤ Xi ≤ 106), represents the initial number of sheep in Star i.

Output
Output a line containing two integers, so that the first represents the number of Stars attacked by the mad brother and the second represents the total number of non-stolen sheep.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.136s
@size 790 Bytes
@submission 12/29/19, 12:39:18 AM
*/
#include <stdio.h>

int main()
{
    unsigned int n, i, visits = 0;
    unsigned long long int total = 0, sheeps = 0;
   
    scanf("%u", &n);
    unsigned int star[n];
    unsigned char passed[n];
   
    for (i = 0; i<n; i++) {
        scanf("%u", &star[i]);
        total += star[i];
        passed[i] = 0;
    }
   
    i = 0;
    while ((i != -1U) && (i < n)) {
        if (passed[i] == 0) {
            visits++;
            passed[i] = 1;
        }

        if (star[i] > 0) {
            if (star[i] % 2)
                --star[i++];
            else
                --star[i--];
                
            sheeps++;
        } else {
            i--;
        }
    }
   
    printf("%u %llu\n", visits, total-sheeps);
       
    return 0;
}