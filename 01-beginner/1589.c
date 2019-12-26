/*
URI Online Judge | 1589
Bob Conduit
By Bruno Adami, Universidade de São Paulo - São Carlos BR Brazil

Timelimit: 1
You have gotten two circular energy cables. The first one has radius R1 and the second R2. You need to buy a circular conduit (see the image below) that fits those two cables:
https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1589.jpg

What is the smallest radius of a conduit you need to buy? In other words, given two circles, what is the smallest radius of a third circle that circumscribe the other two?

Input
In the first line there is an integer T (T ≤ 10000), indicating the number of test cases.

On the only line of each test case we will have the two integers R1 and R2 indicating the cables radius. The integers will be positive and all the math will fit in a regular integer of 32 bits.
Output
In each test case, output the answer in a single line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 244 Bytes
@submission 12/25/19, 11:20:43 PM
*/
#include <stdio.h>

int main()
{
    unsigned short n;
    unsigned int r1,r2;
    
    scanf("%hu", &n);
    while(n--) {
        scanf("%u %u", &r1, &r2);
        printf("%u\n", r1+r2);
    }

    return 0;
}