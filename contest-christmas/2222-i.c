/*
URI Online Judge | 2222
Santa's toys
By Matheus Fabian, URI BR Brazil
https://www.urionlinejudge.com.br/judge/en/challenges/view/499/9

Timelimit: 1

Santa Claus reads Christmas letters every year to know what to give to each child. The problem is, many kids don't send their letters to Santa Claus, so he decided that to save his time, he will give the same gift to children who didn't send letters. So he decided that for children who are boys, he will give a toy car, and for girls a doll.

Input
The first line of the entry has an integer N (0 < N ≤ 1000), the number of children who didn't send their letter to Santa. The next N lines consist of two strings, the first is the child's name, and the second is a letter, which can be 'M', to say it's a boy, or 'F' if it's a girl.

Output
The output consists of 2 lines. The first line should contain the number of toy cars that Santa should make, followed by the word "carrinhos", and on the second line, the number of dolls followed by the word "bonecas".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@submission 12/22/19, 5:10 AM
*/
#include <stdio.h>

int main()
{
    unsigned short int n;
    unsigned short int cars = 0, dolls = 0;
    char sex;
    
    scanf("%hu", &n);
    do {
        scanf("%*s %c", &sex);
        if (sex == 'M')
            cars++;
        else
            dolls++;
    } while (--n);
    
    printf("%u carrinhos\n", cars);
    printf("%u bonecas\n", dolls);
    return 0;
}