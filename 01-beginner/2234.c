/*
URI Online Judge | 2234
Hot Dogs
By Maratona de Programação SBC BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2234

Timelimit: 1
In 2012 it was achieved a new world record in the famous Competition Hot Dogs Nathan: the champion, Joey Chestnut devoured 68 hot dogs in ten minutes, an increase amazing compared to 62 sandwiches devoured by the same Chestnut in 2011.

Nathan's Famous Corporation restaurant, located in Brooklyn, NY, is responsible for the competition. They produce delicious hot dogs, world famous, but when it comes math is they are not as good. They wish to be listed in the Guinness Book of Records, but they should fill out a form describing the basic facts of the competition. In particular, they must inform the average number of hot dogs consumed by participants during the competition.

You can help them? They promised to pay it with one of their tasty hot dogs. Given the total of hot dogs consumed and the total of participants in the competition, you should write a program to determine the average number of hot dogs consumed by participants.

Input
The input consists of a single line containing two integers M and P (1 ≤ H, P ≤ 1000) indicating respectively the total number of consumed hot dogs and the total number of participants in the competition.

Output
Your program should produce a single line with a rational number representing the average hot dogs consumed by the participants. The result should be written as a rational number with exactly two digits after the decimal point, rounded if necessary.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 161 Bytes
@submission 1/26/20, 8:51:42 PM
*/
#include <stdio.h>

int main()
{
    double m,p;
    
    scanf("%lf %lf", &m, &p);
    printf("%.2lf\n", m/p);

    return 0;
}
