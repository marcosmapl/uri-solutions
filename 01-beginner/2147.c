/*
URI Online Judge | 2147
Galopeira
By Ricardo Martins, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2147

Timelimit: 1
One day, the brothers Little Chitão and Xor Or Oh, great typists, made ​​a challenge to see who was the best in typing. For this, they obtained a computer that does not process keystrokes, ie, if it is to enter the same letter twice in a row, to press the button twice, as, press for longer, no use. They also measured the time down a key, which was exactly 1/100 second. The challenge would be who typed the word "Galopeira" consisting of letters and more, but both were very good, and arrived at a point that it was not possible to count how many letters had been typed. Then asked his help to write a program that checks the typed word and see how much time was spent typing.

Write a program that, given a typed word, tell how much time was spent to be entered.

Input
An integer C will be informed, which is the amount of test cases. Each case has a word of at least 9 and at most 10,000 letters.

Output
For each test case, print a T number, which is the time spent, in seconds, to enter the word of their test case, with precision of two decimal digits.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 358 Bytes
@submission 1/24/20, 10:45:42 PM
*/
#include <stdio.h>

int main()
{
    char l;
    unsigned short c;
    double t = 0;
    
    scanf("%hu\n", &c);
    do {
        l = getchar();            
        while (l != '\n') {
            l = getchar();
            t += 0.01;
        }
        printf("%.2lf\n", t);
        
        t = 0.0;
    } while (--c);

    return 0;
}
