/*
URI Online Judge | 1983
The Chosen
By Victor Jatobá, UNIME BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1983

Timelimit: 1
Everyone is talking about the Jatoba Teacher classes. The MEC representatives came to the UNIME of Lauro de Freitas to know more details about this new way of teaching algorithms. In addition, they wanted to select one student to participate in the OBI-Tec (Olympiad Informatics Technical Level) and represent Kroton in the competition, because they know that there are the best. To select the best, they have available a list of the registration number of each student and their respective notes in the discipline. Your task is to help the Ministry of Education staff to find students better able to represent the institution and who knows guarantee your place. If the highest score is not greater than or equal to 8, you should print "Minimum note not reached" .

Input
The file first contains the number of students (3 <= n <= 100) and then the n students bearing the registration number (0 < m < 1000000) each, followed by the note (0 <= note <= 10.0, with 1 decimal place).

Obs .: the notes will not be repeated. In other words, has no chance to have two students with the same note.

Output
You must print the student's registration number with the highest score or "Minimum note not reached" (without quotes) if no student has taken greater note than or equal to 8.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 545 Bytes
@submission 1/7/20, 8:00:52 AM
*/
#include <stdio.h>

int main()
{
    unsigned char n;
    unsigned int mat, mat_maior;
    double nota, nota_maior;
    
    scanf("%hhu", &n);
    scanf("%u %lf", &mat_maior, &nota_maior);
    n--;
    
    while (n--) {
        scanf("%u %lf", &mat, &nota);
        if (nota > nota_maior) {
            nota_maior = nota;
            mat_maior = mat;
        }
    }
    
    if (nota_maior < 8.0) {
        printf("Minimum note not reached\n");
    } else {
        printf("%u\n", mat_maior);
    }

    return 0;
}