/*
URI Online Judge | 1789
The Race of Slugs
By Thalyson Nepomuceno, UECE BR Brazil

Timelimit: 1
The slugs racing is a sport that has grown in recent years, causing several people dedicate their lives trying to capture fast slugs, and trains them to make millions in races around the world. But the task of capturing fast slugs is not an easy task, since almost all the slugs are very slow. Each slug is classified at a level depending on their speed:


Level 1: If speed is less than 10 cm/h.
Level 2: If speed is greater than or equal to 10 cm/h and lower than 20 cm/h.
Level 3: If speed is greater than or equal to 20 cm/h.


Your task is to identify which level of speed faster slug of a group of slugs.

Input
The entry consists consists multiple test cases, and each consists of two lines: The first line contains an integer L (1 ≤ L ≤ 500) representing the number of slugs of the group, and the second line contains L integers Vi (1 ≤ Vi ≤ 50) representing the speeds of each slug.
The input ends with end of file (EOF).

Output
For each test case, output a single line with the level of speed faster slug of a group of slugs.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 449 Bytes
@submission 12/25/19, 11:39:58 PM
*/
#include <stdio.h>

int main()
{
    unsigned short n;
    unsigned char v, max = 0;
    
    while(scanf("%hu", &n) != EOF) {
        for(;n;n--) {
            scanf("%hhu", &v);
            if (v > max)
                max = v;
        }
        if (max < 10)
            printf("1\n");
        else if (max < 20)
            printf("2\n");
        else
            printf("3\n");
        max = 0;
    }
    
    return 0;
}