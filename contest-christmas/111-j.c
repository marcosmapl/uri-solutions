/*
URI Online Judge | 111
The Christmas Tree
By Matheus Fabian, URI BR Brazil
https://www.urionlinejudge.com.br/judge/en/challenges/view/499/10

Timelimit: 1

Every year, Roberto likes to choose his Christmas tree, he doesn't let anyone choose for him, because he thinks the tree to be beautiful, must meet some conditions, such as height, thickness and number of branches, so he can hang many Christmas decorations on it.

Roberto wants his tree to be at least 200 centimeters tall, but he doesn't want it to be larger than 300 centimeters, or the tree won't fit in his house. As for thickness, he wants his tree to have a trunk that is 50 centimeters in diameter or more. The tree must be 150 branches or greater.

Input
The first line of input contains an integer N(0 < N ≤ 10000), the number of test cases. The next N lines contain 3 integers each, h, d and g(0 < a, d, g ≤ 5000), the height of the tree in centimeters, its diameter in centimeters, and the amount of tree branches.

Output
Your task is, for each tree, to print Sim, if it is a tree that Roberto can choose, or Nao, if it is a tree he should not choose.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@submission 12/22/19, 4:58 AM
*/
#include <stdio.h>

int main()
{
    unsigned short int n;
    unsigned short int h,d,g;
    
    scanf("%hu", &n);
    do {
        scanf("%hu %hu %hu", &h, &d, &g);
        if ((g > 149) && (d > 49) && (h < 301) && (h > 199))
            printf("Sim\n");
        else
            printf("Nao\n");
    } while (--n);
    return 0;
}