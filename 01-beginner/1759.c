/*
URI Online Judge | 1759
Ho Ho Ho
By Lucas Campesatto, URI Online Judge BR Brazil

Timelimit: 1
Santa Claus is playing with his elves to entertain them during the Christmas Eve. The game consists of the elves writing numbers on pieces of paper and place on the cap of Santa Claus. After all finished to put the numbers, Santa draws a number and that number is how many "Ho" he should say.

Your job is to help Santa Claus by making a problem that shows all the "Ho" that he should speak given the number drawn.

Input
The input consists of a single integer N (0 < N ≤ 106) representing how many "Ho" will be spoken by Santa.

Output
The output consists of all "Ho" that Santa should speak separated by a space. After the last "Ho" you must present an "!" ending the program.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 182 Bytes
@submission 12/25/19, 11:27:46 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n;
    
    scanf("%u", &n);
    --n;
    for (;n;n--)
        printf("Ho ");
    printf("Ho!\n");
    
    return 0;
}