/*
URI Online Judge | 1061
Event Time
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1061

Timelimit: 1
Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.

You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time corresponding to duration of the event.

Input
The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.

Output
Your program must print the following output, one information by line, considering that if any information is null for example, the number 0 must be printed in place of W, X, Y or Z:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Consider that the event of the test case have the minimum duration of one minute. “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 627 Bytes
@submission 12/7/19, 12:05:17 AM
*/
#include <stdio.h>

int main() {
 
    int di, hi, mi, si;
    int df, hf, mf, sf;
    
    scanf("Dia %d", &di);
    scanf(" %d : %d : %d", &hi, &mi, &si);
    scanf(" Dia %d", &df);
    scanf(" %d : %d : %d", &hf, &mf, &sf);
    
    if (sf < si) {
        mf--;
        sf += 60;
    }
    
    if (mf < mi) {
        hf--;
        mf += 60;
    }
    
    if (hf < hi) {
        df--;
        hf += 24;
    }
    
    printf("%d dia(s)\n", (df-di));
    printf("%d hora(s)\n", (hf-hi));
    printf("%d minuto(s)\n", (mf-mi));
    printf("%d segundo(s)\n", (sf-si));
    
    return 0;
}