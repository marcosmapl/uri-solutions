/*
URI Online Judge | 1847
Welcome to the Winter!
By Leandro Zatesko, UFFS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1847

Timelimit: 1

Welcome to the Erechim Winter School of the ICPC Brazilian Subregional Contest! We sincerely hope you learn a lot during these days so you can be very successful in the Programming contests yet to come, but above all we hope you enjoy the School, for when we have fun and enjoy ourselves studying and programming, the training stops being a burden and becomes a hobby. So, have fun!

The winter is a wonderful season, is it not? We all love wearing a poncho, joining a chimarrão circle, baking pinhões in a wooden burning stove… But not everyone likes the winter, especially in places where winter uses to be very cruel. In Westeros, for example, the people's humour is defined according to climate tendencies. Based on the temperatures of the last three days, the people can be sad or happy, being more likely to make war or to make love, respectively. And, let us be honest, it is precisely because of the scenes of love and war that we love Game of Thrones!

If the temperature decreased from the 1st to the 2nd day, but increased or remained constant from the 2nd to the 3rd, the people are happy (first figure).
If the temperature increased from the 1st to the 2nd day, but decreased or remained constant from the 2nd to the 3rd, the people are sad (second figure).
If the temperature increased from the 1st to the 2nd day and from the 2nd to the 3rd, but increased from the 2nd to the 3rd less than what had increased from the 1st to the 2nd, the people are sad (third figure).
If the temperature increased from the 1st to the 2nd day and from the 2nd to the 3rd, but increased from the 2nd to the 3rd at least what had increased from the 1st to the 2nd, the people are happy (fourth figure).
If the temperature decreased from the 1st to the 2nd day and from the 2nd to the 3rd, but decreased from the 2nd to the 3rd less than what had decreased from the 1st to the 2nd, the people are happy (fifth figure).
If the temperature decreased from the 1st to the 2nd day and from the 2nd to the 3rd, but decreased from the 2nd to the 3rd at least what had decreased from the 1st to the 2nd, the people are sad (sixth figure).
If the temperature remained constant from the 1st to the 2nd day, the people are happy if the temperature increased from the 2nd to the 3rd or sad otherwise (respectively, seventh and eighth figures).
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1847.jpg

Input
The input consists only of three integers, A, B e C (-100 ≤ A, B, C ≤ 100), which represent respectively the temperatures recorded in the 1st, in the 2nd and in the 3rd day.

Output
Print a line containing a happy or a sad smiley, representing how is the humour of the people of Westeros according to the climate tendencies.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 778 Bytes
@submission 12/28/19, 3:52:12 PM
*/
#include <stdio.h>

int main()
{
    short a,b,c;
    
    scanf("%hd %hd %hd", &a, &b, &c);
    a += 100;
    b += 100;
    c += 100;
    
    if (a == b) {
        if (c > b)
            printf(":)\n");
        else
            printf(":(\n");
    } else if ((a > b) && (b > c)) {
        if (b-c < a-b)
            printf(":)\n");
        else
            printf(":(\n");
    } else if ((a < b) && (b < c)) {
        if (c-b < b-a)
            printf(":(\n");
        else
            printf(":)\n");
    } else if (b > a) {
        if (c > b)
            printf(":)\n");
        else
            printf(":(\n");
    } else {
        if (c < b)
            printf(":(\n");
        else
            printf(":)\n");
    }

    return 0;
}