/*
URI Online Judge | 1179
Array Fill IV
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1179

Timelimit: 1

In this problem you need to read 15 numbers and must put them into two different arrays: par if the number is even or impar if this number is odd. But  the size of each of the two arrrays is only 5 positions. So every time you fill one of two arrays, you must print the entire array to be able to use it again for the next numbers that are read. At the end, all remaining numbers of each one of these two arrays must be printed beggining with the odd array. Each array can be filled how many times are necessary.

Input
The input contains 15 integer numbers.

Output
Print the output like the following example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 820 Bytes
@submission 12/22/19, 6:15:01 PM
*/
#include <stdio.h>

int main()
{
    int par[5], impar[5];
    unsigned char i, ip = 0, ii = 0;
    int n;
    
    for (i = 0; i < 15; i++) {
        if (ip == 5) {
            for (;ip;ip--)
                printf("par[%hhu] = %d\n", 5-ip, par[5-ip]);
        }
        if (ii == 5) {
            for (;ii;ii--)
                printf("impar[%hhu] = %d\n", 5-ii, impar[5-ii]);
        }
        
        scanf("%d", &n);
        
        if (n % 2) {
            impar[ii] = n;
            ii++;
        } else {
            par[ip] = n;
            ip++;
        }
            
    }
    
    for (i = 0;i<ii;i++) {
        printf("impar[%hhu] = %d\n", i, impar[i]);
    }
    
    for (i = 0;i<ip;i++) {
        printf("par[%hhu] = %d\n", i, par[i]);
    }
    
    return 0;
}