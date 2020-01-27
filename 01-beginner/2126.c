/*
URI Online Judge | 2126
Searching Subsequences
By Igor Gomes, UEVA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2126

Timelimit: 1
Given two natural numbers N1 and N2, it is said that N1 is contiguous subsequence of N2 if in N1 appear all digits in the same order and contiguously. Create an program that reads two natural numbers and write if the first is a contiguous subsequence of the second.

Input
The input consists of several test cases and ends with the end of file (EOF). The first line of each entry is composed of anatural value N1 (1 <N1 <1010), the second line is composed of a value N2 (N1 <N2<1032).

Output
For each test case print the amount of contiguous subsequences and the position where the substring starts, if there is more of a subsequence, print where it started the last substring. If no there subsequence, print "Nao existe subsequencia" (that means no there subsequence). Show the result as the sample output.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 975 Bytes
@submission 1/26/20, 7:32:12 PM
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char sub_str[12], str[34];
    unsigned char i, j, dif, subs, pos;
    unsigned int c = 0;
    
    while (scanf("%s%s", sub_str, str) != EOF) {
        dif = strlen(str) - strlen(sub_str);
        
        c++;
        subs = 0;
        pos = 0;
        
        for (i = 0; i <= dif; i++) {
            if (str[i] == sub_str[0]) {
                j = 0;
                while ((sub_str[j] != '\0') && (str[i+j] == sub_str[j])) {
                    j++;
                }
                if (sub_str[j] == '\0') {
                    pos = i+1;
                    subs++;
                }
            }
        }
        
        printf("Caso #%d:\n", c);
        if (subs) {
            printf("Qtd.Subsequencias: %hhu\n", subs);
            printf("Pos: %hhu\n\n", pos);
        } else {
            printf("Nao existe subsequencia\n\n");
        }
    }

    return 0;
}
