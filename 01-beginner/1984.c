/*
URI Online Judge | 1984
The Pronalância Puzzle
By Victor Jatobá, UNIME BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1984

Timelimit: 1
NASA scientists have discovered a new exoplanet which is 1 billion light years from earth. The name of this planet was named Pronalândia in honor of the young scientists being formed in PRONATEC. But the most amazing is yet to come. Observing the planet they were able to identify that the inhabitants of Pronalândia were trying to communicate with a number. But the number who have found is reversed and how they found many of them, they called you to be able to automate this process. Thus, given a number, your task is to print the invert number.

Input
 The file contains only a test line which is the number found (0 < n < 9999999999).

Note.: the read number is too high to store in a variable of type int, so you will need to use the long type, for reading and printing in C, you should use the %llu.

Output
print read number inverted. Do not forget to print the end of line (\n) else you will receved the Presentation Error message.	

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 270 Bytes
@submission 1/7/20, 8:11:17 AM
*/
#include <stdio.h>

int main()
{
    long long unsigned int n, dig=0;
    
    scanf("%llu",&n);
    
    do  {
        
        dig = n % 10;
        printf("%llu", dig);
        n /= 10;
        
    } while (n) ;

    printf("\n");

    return 0;
}