/*
 URI Online Judge | 2493
Jogo do Operador
https://www.urionlinejudge.com.br/judge/en/problems/view/2493

By João Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
Timelimit: 1

Samu Elmito loves creating peculiar games to challenge his friends. This time, he made a game called "Jogo do Operador" (Operation Game), in which he creates basic expresssions and each player must choose an expression and fill the gap with the correct operation to validate it. The players may choose 1 out of 3 operations: addition, subtraction and multiplication. However, if the player thinks there's no operation among the 3 operations that validates the expression, he can anwser Impossible.

Your task is simple: given the expressions and the players' answer, determine which players won't proceed to the next phase of the game.
Input

The input consists of an integer T (2 ≤ T ≤ 50) that indicates the number of expression and the number of players. Each test case consists of T expressions like "X Y=Z", indicating that X operation Y (0 ≤ X, Y ≤ 103) is equal to Z (-103 ≤ Z ≤ 106), followed by T players and his respective answers like "N E R", with N being the player's name (up to 50 characters and no blank spaces), E being the index of the chosen expression (1 ≤ E ≤ T) and R the answer (+, -, * or I, indicating Impossible). Read input until EOF.
Output

For each test case, if every player can proceed, print "You Shall All Pass!"; if no player can proceed, print "None Shall Pass!"; otherwise, print, in lexicographical order and between blank spaces, the name of the players who gave the wrong answer and won't proceed to the next phase.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 1.85 KB
@submission 2/15/20, 7:37:33 PM 
*/
#include <stdio.h>
#include <string.h>

unsigned char is_valid(int x, int y, int z, char op) {
    
    if (op == '+')
        return x+y == z;
    
    if (op == '-')
        return x-y == z;
    
    if (op == '*')
        return x*y == z;
        
    if (op == 'I')
        return !(is_valid(x,y,z,'+') || is_valid(x,y,z,'-') || is_valid(x,y,z,'*'));
    
    return 0;
}

int main()
{
    unsigned char t;
    while(scanf("%hhu", &t) != EOF) {
        
        int x[t], y[t], z[t];
        char not_passed[t][51], name[51], op;
        unsigned char exp_n, i, j, count=0;
        
        for (i=0; i<t; i++) {
            scanf("%d %d=%d\n", &x[i], &y[i], &z[i]);
        }
        
        for (i=0; i<t; i++) {
            scanf("%50s", name);
            scanf("%hhu ", &exp_n);
            op = getchar();

            exp_n--;
            if (!is_valid(x[exp_n], y[exp_n], z[exp_n], op)) {
                strcpy(not_passed[count], name);
                count++;
            }
        }
        
        if (count == 0) {
            printf("You Shall All Pass!\n");
            continue;
        }
        if (count == t) {
            printf("None Shall Pass!\n");
            continue;
        }

        j = count;
        op = ' ';
        while (j--) {
            for (i = 0; i < count; i++)
                if (not_passed[i][0] != '\0')
                    break;
            
            exp_n = i;
            
            for (; i<count; i++) {
                if ((not_passed[i][0] != '\0') && (strcmp(not_passed[i], not_passed[exp_n]) < 0))
                    exp_n = i;
            }
            
            if (j == 0)
                op = '\n';
            
            printf("%s%c", not_passed[exp_n], op);
            strcpy(not_passed[exp_n],"");
        }

    }
    
    return 0;
}
