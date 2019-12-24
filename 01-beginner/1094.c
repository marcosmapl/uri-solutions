/*
URI Online Judge | 1094
Experiments
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1094

Timelimit: 1

Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.

This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment.

Input
The first line of input contains an integer N indicating the number of test cases that follows. Each test case contains an integer Amount (1 ≤ Amount ≤ 15) which represents the amount of animal used and a character Type ('C', 'R' or 'S'), indicating the type of animal:
- C: Coelho (rabbit in portuguese)
- R: Rato (rat  in portuguese)
- S: Sapo (frog in portuguese)

Output
Print the total of animals used, the total of each type of animal and the percentual of each one in relation of the total of animals used. The percentual must be printed with 2 digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 806 Bytes
@submission 7/20/18, 10:46:20 AM
*/
#include <stdio.h>

int main() {
	unsigned int total = 0, coelho = 0, rato = 0, sapo = 0, n, qtd;
	char cobaia;

	scanf("%d",&n);
	do {
		scanf("%d %c", &qtd, &cobaia);
		switch (cobaia) {
			case 'C': {
				coelho += qtd;
				break;
			}
			case 'R': {
				rato += qtd;
				break;
			}
			case 'S': {
				sapo += qtd;
				break;
			}
		}
		total += qtd;
		n--;
	} while (n > 0);

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelho);
	printf("Total de ratos: %d\n", rato);
	printf("Total de sapos: %d\n", sapo);
	printf("Percentual de coelhos: %.2lf \%\n", (double)(coelho*100)/total);
	printf("Percentual de ratos: %.2lf \%\n", (double)(rato*100)/total);
	printf("Percentual de sapos: %.2lf \%\n", (double)(sapo*100)/total);

	return 0;
}