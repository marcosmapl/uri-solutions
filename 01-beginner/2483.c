/*
URI Online Judge | 2483
Merry Christmaaas!
By Jessica Dagostini, URI Online Judge BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2483

Timelimit: 1
You get so happy at Christmas that you want to scream at everyone: "Merry Christmas!!". To put all this happiness out, you've wrote a program that, given an I index of happiness, your Christmas scream is more lively.

Input
The input consists of an integer I (1 < I ≤ 104) that represents that happiness index.

Output
The output consists of the phrase "Feliz natal!" ("Merry Christmas" in Portuguese), and the last a of the sentence is repeated I times. A line break is necessary after printing the sentence.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 210 Bytes
@submission 1/30/20, 6:42:55 AM
*/
#include <stdio.h>

int main()
{
    unsigned short n;
    
    scanf("%hu", &n);
    printf("Feliz nat");
    for (;n > 0; n--)
        putchar('a');
    printf("l!\n");
        
    return 0;
}
