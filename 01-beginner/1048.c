/*
URI Online Judge | 1048
Salary Increase
By Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1048

Timelimit: 1

The company ABC decided to give a salary increase to its employees, according to the following table:

Salary	Readjustment Rate
0 - 400.00				15%
400.01 - 800.00			12%
800.01 - 1200.00		10%
1200.01 - 2000.00		 7%
Above 2000.00			 4%

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 720 KB
@submission 12/7/19, 12:47:17 PM
*/
#include <stdio.h>

int main()
{
    double sal, n_sal, reaj = 0.0;;
    
    scanf("%lf", &sal);
    if (sal <= 400.0) {
    	reaj = 0.15;
    } else if (sal <= 800.0) {
    	reaj = 0.12;
        n_sal = sal + (sal * 0.12);
    } else if (sal <= 1200.0) {
    	reaj = 0.10;
    } else if (sal <= 2000.0) {
    	reaj = 0.07;
    } else {
    	reaj = 0.04;
    }
    n_sal = sal + (sal * reaj);	
    printf("Novo salario: %.2f\n", n_sal);
    printf("Reajuste ganho: %.2f\n", n_sal-sal);
    printf("Em percentual: %d %%\n", (int)(reaj*100));
    
    return 0;
}