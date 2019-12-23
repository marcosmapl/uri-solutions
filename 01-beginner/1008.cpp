/*
URI Online Judge | 1008
Salary
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1008

Timelimit: 1

Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.

Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
Don’t forget the space before and after the equal signal and after the U$.
Input
The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.

Output
Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
@time 0.000s
@size 309 Bytes
@submission 5/22/18, 12:25:42 AM
*/
#include <iostream>
 
using namespace std;
 
int main() {
 
    int number, hours;
    float perHour;
    
    scanf("%d",&number);
    scanf("%d",&hours);
    scanf("%f",&perHour);
    
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",(hours * perHour));
 
    return 0;
}