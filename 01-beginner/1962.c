/*
URI Online Judge | 1962
A Long, Long Time Ago
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1962

Timelimit: 1

Raul Seixas sang that he was born 10 thousand years ago and there was nothing in this world that he cannot know too much. The Mamomas Assassinas band sang that more than 10 thousand years "have gone by and passed" [sic] since they have failed at 5th grade. So many past events and professor MC was curious about what year each of these have happened.

You must write a program that, given a series of how many years have passed, show, for each number, in what year the event had happened. Remember that you must indicate if it had happened BC (Before Christ) or AD (Anno Domini). Use the portuguese A.C. for BC and D.C. for AD according to the output sample.

Input
The input has several lines. The first one has a positive integer number N (1 ≤ N ≤ 100000). There are N lines after the first one. Each of these N lines has a single non negative integer T, which indicates how many years have passed until 2015 AD (0 ≤ T < 231).

Output
The output has N lines. In each one there is the year A in which the correspondent time T had happened. Look at the sample output.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.020s
@size 277 Bytes
@submission 12/28/19, 8:05:25 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if(x > 2014) 
            printf("%d A.C.\n", x - 2014);
        else 
            printf("%d D.C.\n", 2015 - x);
    }
    return 0;
}