/*
 URI Online Judge | 2486
C Mais ou Menos?
https://www.urionlinejudge.com.br/judge/en/problems/view/2486
By João Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
Timelimit: 1

Lately, several people are going to Dr. Cláudia Café com Leite to know if they are consuming the recommended daily amount of vitamin C. This exhausted her so she asked you to write a program for her that, given the daily intake of foods rich in vitamin C by a person, returns how much this person has to consume more or less to achieve the recommended amount.

In order to do such, you can use the following table:
Foods rich in Vitamin C 	Amount of Vitamin C
suco de laranja 	120 mg
morango fresco 	85 mg
mamao 	85 mg
goiaba vermelha 	70 mg
manga 	56 mg
laranja 	50 mg
brocolis 	34 mg

Consider the recommended daily intake of vitamin C is between 110 mg and 130 mg, inclusive.
Input

Each test case consists of an integer T (1 ≤ T ≤ 7) indicating that the person daily intakes T foods among the 7 foods from the table. The next T lines with an integer N and a food (lowercase and no blank spaces) indicates that the person intakes an amount N of that food. Read input until T = 0.

Output

For each test case (T), if the intake exceeds the recommended limit, print "Menos X mg", in which X represents how much less the person must consume to reach the recommended limit; if the intake doesn't reach the recommended amount, print "Mais X mg", in which X represents how much more the person must consume to reach the recommended amount; if the intake is between the recommended amount range, print "X mg", in which X represents the daily amount of vitamin C intaken by the person.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 1.22 KB
@submission 2/15/20, 4:57:29 PM 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int t, i, intake, n;
    char food[20];
    
    do {
        scanf("%u", &t);
        if (t == 0)
            break;

        intake = 0;

        for (i = 0; i < t; ++i) {
                
            scanf("%u ", &n);
            fgets(food, 20, stdin);

            if (!strncmp(food, "suco de laranja", 15))
                intake += n * 120;
            else if (!strncmp(food, "morango fresco", 14))
                intake += n * 85;
            else if (!strncmp(food, "mamao", 5))
                intake += n * 85;
            else if (!strncmp(food, "goiaba vermelha", 15))
                intake += n * 70;
            else if (!strncmp(food, "manga", 5))
                intake += n * 56;
            else if (!strncmp(food, "laranja", 7))
                intake += n * 50;
            else if (!strncmp(food, "brocolis", 8))
                intake += n * 34;
        }

        if (intake < 110)
            printf("Mais %u mg\n", 110 - intake);
        else if (intake > 130)
            printf("Menos %u mg\n", intake - 130);
        else
            printf("%u mg\n", intake);
        
    } while (1);

    return 0;
}
