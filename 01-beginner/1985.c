/*
URI Online Judge | 1985
MacPRONALTS
By Victor Jatobá, UNIME BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1985

Timelimit: 1
The MacPRONALTS is with a super promotion, exclusive to the contestants of the first Selective MaratonaTEC. But they had a problem, all runners were trying to buy at the same time, so this generated a very long queue. The worst is that the cashier girl no have calculator or a program to help her to calculate more quickly. You are the person that will help the girl and the MacPRONALTS increase their sells. Bellow has a menu day, that contains the product number and its value.

1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50

Input
The first entry is reported the number of purchased products (1 <= p <= 5). For each product follows the quantity (1 <= q <= 500) that the customer purchased.

Obs .: the product number will not be repeated.

Output
You must print the purchase amount with two decimal places.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 370 Bytes
@submission 1/7/20, 8:18:55 AM
*/
#include <stdio.h>

int main()
{
    double prices[5] = {1.5,2.5,3.5,4.5,5.5}, total = 0;
    unsigned char prods;
    unsigned short code, qty;
    
    scanf("%hhu", &prods);
    
    while (prods--) {
        scanf("%hu %hu", &code, &qty);
        code -= 1001;
        total += prices[code]*qty;
    }
    printf("%.2lf\n", total);

    return 0;
}