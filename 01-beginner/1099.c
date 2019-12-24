/*
URI Online Judge | 1099
Sum of Consecutive Odd Numbers II
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1099

Timelimit: 1

Read an integer N that is the number of test cases. Each test case is a line containing two integer numbers X and Y. Print the sum of all odd values between them, not including X and Y.

Input
The first line of input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

Output
Print the sum of all odd numbers between X and Y.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 412 Bytes
@submission 12/8/19, 9:53:38 AM
*/
#include <stdio.h>

int main(void) {
    int n, a,b, c = 0;

    scanf("%d", &n);
    do {
        
        scanf("%d %d", &a, &b);
        if (a > b) {
            c = a;
            a = b;
            b = c;
            c = 0;
        }
        
        for (a+=1; a<b; a++)
            if (a % 2)
                c+=a;
        printf("%d\n", c);
        c = 0;
    } while (--n);
    return 0;
}