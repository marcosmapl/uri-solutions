/*
URI Online Judge | 2060
Bino's Challenge
By Thalyson Nepomuceno, UECE BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2060

Timelimit: 1
Bino and Cino are close friends. Bino likes to create mathematical challenges to Cino. This time, Bino created a list of numbers and asked to Cino: How many numbers are multiples of 2, 3, 4 and 5?

This challenge looks simple, but when the list contains many numbers, Cino makes some miscalculations. To help Cino, make a program to solve the Bino's Challenge.

Input
The first line of input consists of an integer N (1 ≤ N ≤1000), representing the amount of numbers in the Bino's list.

The second line contains N integers Li (1 ≤ Li ≤ 100), representing the numbers of the Bino's list.

Output
Print the amount of multiples of 2, 3, 4 and 5 in the list. Note the formatting of the output in the output sample, because it must be followed strictly. "Multiplo(s)" means "Multiple(s)" in English, but you must print the message in Portuguese.	

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 617 Bytes
@submission 1/7/20, 12:04:04 AM
*/
#include <stdio.h>

int main()
{
    int mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    int n, l;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &l);
        
        if (l % 2 == 0)
            mult2++;
        
        if (l % 3 == 0)
            mult3++;
        
        if (l % 4 == 0)
            mult4++;
        
        if (l % 5 == 0)
            mult5++;
    }
    
    printf("%d Multiplo(s) de 2\n", mult2);
    printf("%d Multiplo(s) de 3\n", mult3);
    printf("%d Multiplo(s) de 4\n", mult4);
    printf("%d Multiplo(s) de 5\n", mult5);

    return 0;
}