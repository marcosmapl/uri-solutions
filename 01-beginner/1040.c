/*
URI Online Judge | 1040
Average 3
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1040

Timelimit: 1

Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.

Input
The input contains four floating point numbers that represent the students' grades.

Output
Print all the answers with one digit after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 846 Bytes
@submission 7/19/18, 7:18:26 PM
*/
#include <stdio.h>
#include <math.h>

int main() {
	float nota1, nota2, nota3, nota4;
	float media;

	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	media = (nota1*2) + (nota2*3) + (nota3*4) + nota4;
	media /= 10;
	printf("Media: %.1f\n", media);

	if (media >= 7.0f) {
		
		printf("Aluno aprovado.\n");

	} else if (media >= 5.0f) {
		
		printf("Aluno em exame.\n");
		scanf("%f",&nota1);
		printf("Nota do exame: %.1f\n", nota1);
		media = (media + nota1) / 2;

		if (media >= 5.0)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");

		printf("Media final: %.1f\n", media);
	} else {
		printf("Aluno reprovado.\n");		
	}

	return 0;
}