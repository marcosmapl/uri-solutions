/*
URI Online Judge | 2203
Crowstorm
By Ícaro Dantas, UFCG BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2203

Timelimit: 1
Fiddlesticks is a champion of League of Legends, he has as his ultimate ability "CrowStorm", it works as follows:

First Fiddlesticks chooses a strategic location and promptly he prepares to resurface in one direction within a certain distance, then it is rooted and channels the ultimate by just 1.5 seconds, after that time it resurfaces immediately at the target site with a flock of crows flying in the around and causing much damage.

Fiddlesticks want your help to find out if in a certain position it is possible to achieve an invader with his ultimate skill.

Note: Consider that Fiddlesticks always uses his ultimate exactly in the direction of ivasor and the invader always tries to flee in the opposite direction to Fiddlesticks, at a constant speed.
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_2203.png

Input
The entry consists of several lines, each line contains the following integer values: Xf, Yf, Xi, Yi, Vi, R1 e R2(0 ≤ Xf, Yf, Xi, Yi, Vi, R1 e R2 ≤ 100), representing respectively the coordinates of Fiddlesticks, the initial coordinates of the invader, the speed of the invader, the ultimate of casting radius and flight radius of crows. Consider the unit of measurement as the meter.

Output
In the output you should print for each line the 'Y' character if it is possible to achieve the invasor or 'N' otherwise, both followed by a line break.	

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 426 Bytes
@submission 1/25/20, 1:14:33 AM
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double xf, yf, xi, yi, vi, r1, r2;
    
    while (scanf("%lf %lf %lf %lf %lf %lf %lf", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF) {
        xf = ((xi-xf)*(xi-xf))+((yi-yf)*(yi-yf));
        xf = sqrt(xf) + (vi*1.5);
        r1 += r2;
        if (xf > r1)
            printf("N\n");
        else
            printf("Y\n");
    }
        
    return 0;
}
