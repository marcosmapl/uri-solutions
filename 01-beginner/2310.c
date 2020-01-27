/*
URI Online Judge | 2310
Volleyball
By Leonardo Fernandes, IFSC BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2310

Timelimit: 1
A volleyball coach would like to keep statistics about his team. In every game he keeps track of the number of services, blocks and attacks of each player, as well as how many of these services, blocks and attacks were successful (scored points). Your program must show, with two decimal points what is the total percentage of services, blocks and attacks by the whole team that were successful.

Input
Input starts with the number of players N (1 ≤ N ≤ 100), followed by the names of each of these players. Below the name of each player, two rows of integers are presented. In the first row, the numbers represent the service, blocks and attack attempts (0 ≤ S,B,A ≤ 10000) by the specific player. In the second row there is the number of these services, blocks and attacks (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) that were successful.

Output
The output must contain the total percentage of successful services, blocks and attacks by the whole team, with two digits after the decimal point, as shown in the example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 647 Bytes
@submission 1/27/20, 8:09:18 AM
*/
#include <stdio.h>

int main()
{
    unsigned char n;
    double x, y, z, att[3] = {0.0,0.0,0.0};
    double suc[3] = {0.0,0.0,0.0};
    
    scanf("%hhu", &n);
    
    while (n--) {
        scanf("%*s\n%lf %lf %lf", &x, &y, &z);
        att[0] += x;
        att[1] += y;
        att[2] += z;
        scanf("%lf %lf %lf", &x, &y, &z);
        suc[0] += x;
        suc[1] += y;
        suc[2] += z;
    }
    
    printf("Pontos de Saque: %.2lf %%.\n", suc[0]/att[0]*100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", suc[1]/att[1]*100);
    printf("Pontos de Ataque: %.2lf %%.\n", suc[2]/att[2]*100);

    return 0;
}
