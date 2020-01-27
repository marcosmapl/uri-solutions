/*
URI Online Judge | 2334
Little Ducks
By Hiago Oliveira de Jesus, UEA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2334

Timelimit: 1
Five little ducks went for a walk. Beyond the mountains. To play. Their mom cried: 'Quack, quack, quack, quack'. But only four little ducks came back from there. Four little ducks went for a walk. Beyond the mountains. To play. Their mom cried: 'Quack, quack, quack, quack'. But only three little ducks came back from there. Three little ducks went for a walk. Beyond the mountains. To play. Their mom cried: 'Quack, quack, quack, quack'. But only two little ducks came back from there. Two little ducks went for a walk. Beyond the mountains. To play. Their mom cried: 'Quack, quack, quack, quack'. But only one little duck came back from there. One little duck went for a walk. Beyond the mountains. To play. Its mom cried: 'Quack, quack, quack, quack'. But no little ducks came back from there.

The mother duck was so sad that day decided to ask your help to look beyond the mountains, at the seashore, how many ducklings did not return from there.

Input
There will be several test cases, the first line of each test case contains an integer  (0 ≤ P ≤ 1019) representing the total amount of ducks, the input ends with P = -1.

Output
The output file should contain the amount of little ducks returned there.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.056s
@size 294 Bytes
@submission 1/27/20, 7:13:42 PM
*/
#include <stdio.h>

int main()
{
    unsigned long long n;
    
    scanf("%llu", &n);
    while (n != -1ULL) {
        if (n == 0)
            printf("0\n");
        else
            printf("%llu\n", n-1);
            
        scanf("%llu", &n);
    }
        
    return 0;
}
