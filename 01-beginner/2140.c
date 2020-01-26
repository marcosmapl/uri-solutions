/*
URI Online Judge | 2140
Two Bills
By Joao Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2140

Timelimit: 1
Gilberto is a famous sfiha vendor. However, although everyone likes his sfihas, he can only give the change with two different bills, i.e., it's not always possible to get the right change. In order to make Gil's life easier, write a program for him to check whether it's possible to give the exact change using two different bills.

Available bills: 2, 5, 10, 20, 50 and 100.

Input
The input contains an integer N representing the buy price and then an integer M representing the price paid by the costumer (N < M ≤ 104). Read input until N = M = 0.

Output
Print "possible" if it's possible to give the exact change or "impossible" if it's not.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 767 Bytes
@submission 1/24/20, 10:00:40 PM
*/
#include <stdio.h>

int main()
{
    unsigned char i, j, b;
    unsigned short notas[6] = {2,5,10,20,50,100};
    unsigned short n, m;
    
    scanf("%hu %hu", &n, &m);
    while ((n != 0) && (m != 0)) {
        m -= n;
        if (m > 200) {
            printf("impossible\n");
            
        } else {
        
            for (i = 0, b = 1; (i < 6) && b; i++)
                for (j = 0; (j < 6) && b; j++) {
                    if (notas[i]+notas[j] == m) {
                        printf("possible\n");
                        b = 0;
                    }
                }
            
            if (b)
                printf("impossible\n");
        } 
        
        scanf("%hu %hu", &n, &m);
    }

    return 0;
}
