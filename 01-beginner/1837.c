/*
URI Online Judge | 1837
Preface
By Leandro Zatesko, UFFS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1837

Timelimit: 1

It has begun the IV UFFS Programming Contest! We hope you enjoy the next hours you are going to spend with us, as we hope you have a lot of fun! Good luck!

This is the 3rd year of the Programming Club, an extension program whose primary goal is to help the programmers of the Brazilian region known as Southern Border to get readier to face the computational challenges from both academic and corporate worlds. Our main strategy lies in promoting workshops and training sessions for Programming contests, not only for students of our institution (UFFS), but also for whoever wants to participate. Despite of many issues, we find ourselves very happy with the results we have been achieving. Having other institutions as partners, as UNOCHAPECÓ, URI and UNOESC, we collaborated to make Chapecó in the past two years the 2nd largest site of ICPC Brazilian Subregional Contest, which is another indicator of the enthusiasm our people has in Programming.

In order to warm you up for this particular contest, we shall ask you to write a program which calculates the quotient and the remainder of the division of two integers, can that be? Recall that the quotient and the remainder of the division of an integer a by a non-zero integer b are respectively the only integers q and r such that 0 ≤ r < |b| and:

a = b × q + r

In case you don't know it, the theorem that guarantees the existence and the uniqueness of the integers q and r is known as ‘Euclidean Division Theorem’ or ‘Division Algorithm’.

Input
The input consists of two integers a and b (-1,000 ≤ a, b < 1,000).

Output
Print the quotient q followed by the remainder r of the division of a by b.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 490 Bytes
@submission 12/27/19, 9:01:32 AM
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sign = 1;
    short a, b, sum = 0, q = 1, r = 0;
    
    scanf("%hd %hd", &a, &b);
    if (a >= 0)
        printf("%hd %hd\n", a/b, a%b);
    else {
        if (b > 0)
            sign = -1;
            
        sum = (b*sign);
        while (sum > a) {
            sum += (b*sign);
            q++;
        }
        
        printf("%hd %hd\n", q*sign, a-(q*b*sign));
    }
    
    
    return 0;
}