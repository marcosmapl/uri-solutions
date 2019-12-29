/*
URI Online Judge | 1866
Bill
By Ricardo Martins, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1866

Timelimit: 1

Two friends ask the attendant a snack bar propose a challenge , so that whoever hit him more , would not pay the bill. Then the following is proposed : Given the following sum below report the result , with the same number of terms : S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ... Write a program that , given a number of terms, report the result of the sum above.

Input
An integer C shall be informed , which is the amount of test cases. Each test case starts with an integer N ( 1 ≤ N ≤ 1000) , indicating the number of terms of the sum .

Output
For each test case print a number S , which is the sum of N terms of expression.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 256 Bytes
@submission 12/28/19, 5:01:18 PM
*/
#include <stdio.h>

int main()
{
    unsigned short c,n;
    
    scanf("%hd", &c);
    while (c--) {
        scanf("%hd", &n);
        if (n % 2)
            printf("1\n");
        else
            printf("0\n");
    }
    
    return 0;
}