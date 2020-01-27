/*
URI Online Judge | 2313
Which Triangle
By Alexandre A. Melo, IFSC BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2313

Timelimit: 1
Given three values, find out if they form a triangle. If so, check if the triangle is scalene, isoceles or equilateral and if it is a triangle rectangle or not.

Input
Input is given by three integers A,B e C (0 < A,B,C < 105).

Output
The output must be the one single line containing the string "Invalido" if the input values do not represent a triangle.

If the values can be the sides of a triangle the output must be "Valido-Equilatero" if such triangle is equilateral, "Valido-Escaleno" if it is scalene or "Valido-Isoceles" if it is isoceles. The next line of output must read "Retangulo: S" if the triangle is rectangle or "Retangulo: N" otherwise, as shown in the examples.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 1.1 KB
@submission 1/27/20, 6:59:01 PM
*/
#include <stdio.h>
#include <stdlib.h>

#define NOT_TRIANGLE 0
#define IS_TRIANGLE 1

unsigned char isTriangle(unsigned a, unsigned b, unsigned c) {
    if ((abs(b-c) >= a) || (a >= (b+c)))
        return NOT_TRIANGLE;
    if ((abs(a-c) >= b) || (b >= (a+c)))
        return NOT_TRIANGLE;
    if ((abs(a-b) >= c) || (c >= (b+a)))
        return NOT_TRIANGLE;
        
    return IS_TRIANGLE;
}

char isRectangle(unsigned a, unsigned b, unsigned c) {
    a *= a;
    b *= b;
    c *= c;
    
    if ((a == b+c) || (b == a+c) || (c == b+a))
        return 'S';
        
    return 'N';
}

int main()
{
    unsigned int a,b,c;
    
    scanf("%u %u %u", &a, &b, &c);
    
    if (isTriangle(a,b,c) == NOT_TRIANGLE) {
        printf("Invalido\n");
    } else {
        if ((a == b) && (b == c) && (a == c))
            printf("Valido-Equilatero\n");
        else if ((a == b) || (b == c) || (a == c))
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");
            
        printf("Retangulo: %c\n", isRectangle(a,b,c));
    }

    return 0;
}
