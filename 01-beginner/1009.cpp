/*
URI Online Judge | 1009
Salary with Bonus
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1009

Timelimit: 1

Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
@time 0.000s
@size 306 Bytes
@submission 5/22/18, 12:56:25 AM
*/
#include <iostream>
 
using namespace std;
 
int main() {
 
    char name[256];
    double salary, sold;
    
    fgets(name, sizeof(name), stdin);
    scanf("%lf",&salary);
    scanf("%lf",&sold);
    salary += (sold * 15) / 100;
    printf("TOTAL = R$ %.2lf\n", salary);
 
    return 0;
}