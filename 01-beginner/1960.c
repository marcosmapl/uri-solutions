/*
URI Online Judge | 1960
Roman Numerals for Page Numbers
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1960

Timelimit: 1

The ECI (Editio Chronica Incredibilis or Amazing Chronicles Editors) is very traditional when numbering the pages of its books. It always uses the Roman numerals for that. And its books never have more than 999 pages. When necessary, the books are split into volumes.

You must write a program that, given an arabic number, show its equivalent in roman numerals.

Remember that I stands for 1, V for 5, X for 10, L for 50, C for 100, D for 500 and M stands for 1000.

Input
The input is a positive integer number N (0 < N < 1000).

Output
The output is the number N written as Roman numerals in a single line. Always use uppercase letters.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 871 Bytes
@submission 12/28/19, 7:57:19 PM
*/
#include <stdio.h>

void print_cent(unsigned char n) {
    const char* const arr[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    printf("%s", arr[n]);
}

void print_dez(unsigned char n) {
    const char* const arr[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    printf("%s", arr[n]);
}

void print_unt(unsigned char n) {
    const char* const arr[] = { "","I","II","III","IV","V","VI","VII","VIII","IX"};
    printf("%s", arr[n]);
}

int main()
{
    unsigned short n;
    unsigned char dig;
    
    scanf("%hu", &n);
    
    if (n > 99) {
        dig = (unsigned char) (n/100);
        print_cent(dig);
        n -= (dig*100);
    }    
    if (n > 9) {
        dig = (unsigned char) (n/10);
        print_dez(dig);
        n -= (dig*10); 
    }
    print_unt(n);
    printf("\n");
    
    return 0;
}