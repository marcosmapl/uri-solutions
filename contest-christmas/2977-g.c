/*
URI Online Judge | 2977
Playing Darts by Distance
By Pedro S. L. Rey BR Brazil
https://www.urionlinejudge.com.br/judge/en/challenges/view/499/7

Timelimit: 1

John and Mary created their own version of darts, darts by distance. Each one throws 3 darts, choosing how far they will play from the target. In the normal game of darts, a number x is scored by the distance between where the dart hit and the center of the target. In the game of John and Mary it is punctuated xd where d is the distance betwen the shooter and the target.

John asks you to make an algorithm that gives the score given the distance of each turn, returns the winner

Input
The first line of the entry consists of a N number of test cases. In each test case there will be 6 lines, where the first 3 lines correspond to the pitches of John and the next 3 lines to the pitches of Mary. Each line of a test case consists of two numbers X and D where X is the score and D is the distance

Output
The output consists of the winner of each test case.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@submission 12/22/19, 5:40 AM
*/
#include <stdio.h>

int main()
{
    unsigned int n;
    int pontos = 0;
    unsigned int x,d;
        
    scanf("%d", &n);
    do {
        scanf("%u %u", &x, &d);
        pontos += (x*d);
        scanf("%u %u", &x, &d);
        pontos += (x*d);
        scanf("%u %u", &x, &d);
        pontos += (x*d);
        
        scanf("%u %u", &x, &d);
        pontos -= (x*d);
        scanf("%u %u", &x, &d);
        pontos -= (x*d);
        scanf("%u %u", &x, &d);
        pontos -= (x*d);
        
        if (pontos > 0)
            printf("JOAO\n");
        else 
            printf("MARIA\n");
        
        pontos = 0;
    } while (--n);
    
    return 0;
}