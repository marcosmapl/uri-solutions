/*
URI Online Judge | 2028
Sequence of Sequence
By Albertinin Mourato, UFPE BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2028

Timelimit: 3
Hyam is a guy that loves sequences. He is finding interesting sequences that even Fibonacci would not have imagined. One day Hyam saw that given a number N, he could make a sequence like 0 1 2 2 3 3 3 4 4 4 …N N N … N. However, Hyam saw that each value that increased in the sequence number, the total quantity increases at a factorial rate. In this case, instead of multiplying, you add the total number of numbers to the sequence with the value of the next number in the sequence. For example, if N = 2. The correct sequence would be 0 1 2 2, which is 4 digits. Now, if N = 3, the next number in the sequence would have the value 3, so the total quantity of numbers in the sequence would bem the quantiy of numbers with N = 2, which is 4, plus the value of the next number in the sequence, in this case 3, giving you 7, since the correct sequence for N = 3 is 0 1 2 2 3 3 3.

Your task is make an algorithm that given a integer N, has as answer the total quantity of numbers of this sequence and below the complete sequence.

Input
The input consists of several test cases. Each case is composed of an integer N (0 <= N <= 200) that indicates the last value of the last N numbers of the sequence numbers.
The input ends with end of file (EOF).

Output
The output is in format Case X: N numbers where X is the order of number of cases and N is the number of numbers that contains the complete sequence, the next line sequence numbers with a space between them. You are asked to leave a blank line after each case.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 535 Bytes
@submission 1/7/20, 9:06:54 AM
*/
#include <stdio.h>

int main()
{
    unsigned short n = 0, i,j;
    unsigned int sum, k = 1;

    while (scanf("%hu", &n) != EOF) {
        if (n == 0) {
            printf("Caso %u: 1 numero\n0\n\n", k++);
            continue;
        }
        
        sum = 1 + (n*(n+1)/2);
        printf("Caso %u: %u numeros\n0", k++, sum);
            
        for (i = 1; i<=n; i++)
            for (j = 0; j<i; j++)
                printf(" %hu", i);
                
        printf("\n\n");
    }
    
    return 0;
}