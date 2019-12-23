/*
URI Online Judge | 1007
Difference
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1007

Timelimit: 1

Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
@time 0.000s
@size 271 Bytes
@submission 5/21/18, 9:34:04 AM
*/
#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, dif = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    dif = (a * b);
    scanf("%d",&a);
    scanf("%d",&b);
    dif -= (a * b);
    printf("DIFERENCA = %d\n",dif);
 
    return 0;
}