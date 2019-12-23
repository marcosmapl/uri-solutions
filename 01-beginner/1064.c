/*
URI Online Judge | 1064
Positives and Average
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1064

Timelimit: 1

Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.

Input
The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.

Output
The first output value is the amount of positive numbers. The next line should show the average of the positive values ​typed.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 317 Bytes
@submission 12/7/19, 1:52:18 PM
*/
#include <stdio.h>

int main()
{
    double n, sum = 0;
    unsigned char c = 0,i;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &n);
        if (n > 0) {
            c++;
            sum += n;
        }
    }
    printf("%d valores positivos\n", c);
    printf("%.1lf\n", sum/c);
    return 0;
}