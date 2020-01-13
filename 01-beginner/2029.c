/*
URI Online Judge | 2029
Honey Reservoir
By Deoclécio Lima, UNIPÊ BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2029

Timelimit: 1
Julius is the owner of a large apiry situated in Paraíba. Every year, every six months, Julius collect honey produced by bees of their property and stores it in a CYLINDRICAL container format that facilitates the transport of honey for establishments who order this natural product for commercialization . Once Julio realized due to an increase in honey production, over the previous six months, the container that owned the stand the volume of honey produced by his bees. Julius needs now that you make a program that informs the volume of honey in cm3 and the diameter of the inside of the container in cm, calculate and show:

- What should be the height (in cm) of Inside the container;

- The area (in cm2) of the mouth (entrance) of the container.

NB .: Consider π = 3.14

Input
The input contains several test cases and ends with EOF. Each test case consists of a line containing two floating-point values of double precision with two decimals after comma, one V (1.00 ≤ V ≤ 10000.00) and one D (1.00 ≤ D ≤ 100.00), respectively representing the volume and the container diameter.

Output
For each test, the output contains the first line "ALTURA = " message, with a space after ALTURA and another after the symbol of equality, followed by the container height value with two decimals after comma and the second line message "AREA = ", also with a space after AREA and another after the symbol of equality, followed by the value of the area of the mouth (entrance) of the container with two decimals after comma.

- Do not forget the line break at the end of the exit, otherwise you will get "Presentation Error".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 261 Bytes
@submission 1/7/20, 9:16:48 AM
*/
#include <stdio.h>

int main()
{
    double v, d, a, h;

    while (scanf("%lf\n%lf", &v, &d) != EOF) {
        d /= 2.0;
        a = 3.14 * (d*d);
        h = v/a;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", h, a);
    }
    
    return 0;
}