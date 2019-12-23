/*
URI Online Judge | 1049
Animal
By Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1049

Timelimit: 1

In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.
<img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1049_b.png" alt="Animal Species Table">

Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 997 Bytes
@submission 12/7/19, 1:00:41 PM
*/
#include <stdio.h>

int main()
{
    char s[13];
    scanf("%s", s);
    
    if (s[0] == 'v') {
        scanf("%s", s);
        if (s[0] == 'a') {
            scanf("%s", s);
            if (s[0] == 'c') {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            scanf("%s", s);
            if (s[0] == 'o') {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        scanf("%s", s);
        if (s[0] == 'i') {
            scanf("%s", s);
            if (s[2] == 'm') {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            scanf("%s", s);
            if (s[0] == 'h') {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}