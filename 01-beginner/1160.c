/*
URI Online Judge | 1160
Population Increase
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1160

Timelimit: 1

Mariazinha wants to solve an interesting problem. Given the population and growing rate of 2 cities (A and B), she would like to know how many years would be necessary to the smaller city (always A) to be greater than the larger city (always B) in population. Of course, she only wants to know the result for cities that the growing rate for city A is bigger than the growing rate for city B, therefore, she separated these test cases for you. Your job is to build a program that print the time in years for each test case.

However, in some cases the time can be so big and Mariazinha don't want to know the exact time for these cases. In this way, for these test cases, it is enough printing the message "Mais de 1 seculo", that means "More than a Century".

Input
The first line of the input contains a single integer T, indicating the number of test cases (1 ≤ T ≤ 3000). Each test case contains four numbers: two integers PA and PB (100 ≤ PA < 1000000, 100 ≤ PB ≤ 1000000, PA < PB) indicating respectively the population of A and B and two numbers G1 and G2 (0.1 ≤ G1 ≤ 10.0, 0.0 ≤ G2 ≤ 10.0, G2 < G1) with one digit after the decimal point each, indicating the populational growing (in percentual) for A and B respectively.

Pay attention please: The population always is an integer number. So, a growing of 2.5% over a population of 100 will result in 102 (instead of 102.5) and a growing of 2.5% over a population of 1000 will result in 1025. In addition, use double variables to the growing rate.

Output
Print, for each test case, how many years would be necessary to the city A became greater than the city B (in inhabitants). Remember that if this time is greater than 100 it will be necessary printing the message: "Mais de 1 seculo". In each one of these cases, maybe would be interesting interrupt the counting, otherwise you'll get "Time Limit Exceeded".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.004s
@size 620 Bytes
@submission 12/13/19, 12:45:29 AM
*/
#include <stdio.h>

int main()
{
    unsigned int t, c;
    unsigned int pa, pb;
    double ga, gb;
    
    scanf("%d", &t);
    do {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        ga = (ga/100.0);
        gb = (gb/100.0);
        c = 0;
        while (pa <= pb) {
            if (c > 100)
                break;
            pa += (int)((double)pa*ga);
            pb += (int)((double)pb*gb);
            c++;
        }
        if (c > 100) 
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", c);
    } while (--t);
    

    return 0;
}