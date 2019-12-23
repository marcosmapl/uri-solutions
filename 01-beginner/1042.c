/*
URI Online Judge | 1042
Simple Sort
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1042

Timelimit: 1

Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 905 Bytes
@submission 7/19/18, 7:34:12 PM
*/
#include <stdio.h>

int main() {
	int n1, n2, n3;
	int aux1, aux2, aux3;

	scanf("%d %d %d", &n1, &n2, &n3);

	aux1 = n1, aux2 = n2, aux3 = n3;

  	if (n1 > n2) { 
      	n1 += n2;
      	n2  = n1 - n2; 
      	n1  -= n2;
    }

 	if (n2 <= n3) { 
      	printf("%d\n%d\n%d\n\n", n1, n2, n3);
      	printf("%d\n%d\n%d\n", aux1, aux2, aux3);
    } else { 
      	if (n1 <= n3) { 
      		printf("%d\n%d\n%d\n\n", n1, n3, n2);
      		printf("%d\n%d\n%d\n", aux1, aux2, aux3);
		} else	{ 
			printf("%d\n%d\n%d\n\n", n3, n1, n2);
      		printf("%d\n%d\n%d\n", aux1, aux2, aux3);
		}
    }

	return 0;
}