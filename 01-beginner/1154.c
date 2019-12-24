/*
URI Online Judge | 1154
Ages
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1154

Timelimit: 1

Write an algorithm to read an undeterminated number of data, each containing an individual's age. The final data, which will not enter in the calculations, contains the value of a negative age. Calculate and print the average age of this group of individuals.

Input
The input contains an undetermined number of integers. The input will be stop when a negative value is read.

Output
The output contains a value corresponding to the average age of individuals.

The average should be printed with two digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 286 Bytes
@submission 12/11/19, 3:16:47 AM
*/
#include <stdio.h>

int main()
{
    int age = 0;
    unsigned int n = 0;
    double mean = 0.0;
    
    scanf("%d", &age);
    while (age > 0) {
        mean += age;
        n++;
        scanf("%d", &age);
    }
    printf("%.2lf\n", (mean/n));
    
    return 0;
}