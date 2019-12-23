/*
URI Online Judge | 1051
Taxes
By Neilor Tonin, URI  Brasil

Timelimit: 1
In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.
Salary 								Taxes
from 0.00 to R$ 2,000.00			Without taxes
from R$ 2,000.01 to R$ 3,000.00		 8 %
from R$ 3,000.01 to R$ 4,500.00		18 %
more than R$ 4,500.00				28 %

Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.

Input
The input contains only a float-point number, with 2 digits after the decimal point.

Output
Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "Isento".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 419 Bytes
@submission 12/7/19, 1:27:01 PM
*/
#include <stdio.h>

int main()
{
    double n, i = 0.0;
    scanf("%lf", &n);
    
    if (n <= 2000.0) {
        printf("Isento\n");
    } else {
        if (n > 4500.0)
            i = 80.0 + 270.0 + ((n-4500.0)*0.28);
        else if (n > 3000.0)
            i = 80.0 + ((n-3000.0)*0.18);
        else
            i = ((n-2000.0)*0.08);
        printf("R$ %.2lf\n", i);
    }
    
    return 0;
}