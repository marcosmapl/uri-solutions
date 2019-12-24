/*
URI Online Judge | 1074
Even or Odd
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1074

Timelimit: 1

Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.

Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107)..

Output
For each test case, print a corresponding message, according to the below example. All messages must be printed in uppercase letters and always will have one space between two words in the same line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 494 Bytes
@submission 12/7/19, 2:55:36 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n;
    int v;
    scanf("%u", &n);
    
    do {
        scanf("%d", &v);
        if (!v)
            printf("NULL\n");
        else {
            if (v % 2)
                printf("ODD ");
            else
                printf("EVEN ");
            
            if (v < 0)
                printf("NEGATIVE\n");
            else
                printf("POSITIVE\n");
        }
    } while (--n);
    
    return 0;
}