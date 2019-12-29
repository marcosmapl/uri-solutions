/*
URI Online Judge | 1929
Triangle
By Guilherme Albuquerque Pinto, Universidade Federal de Juiz de Fora BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1929

Timelimit: 1

Ana and her friends are making a geometry work to school, they need to create various triangles on a chart, with a few sticks of different lengths. Soon they realized that you can not form triangles with three rods of any lengths: if one of the rods is too large relative to the other two, you can't form a triangle.

In this issue, you have to help Ana and her friends to determine if, given the lengths of four rods, it is or not possible to select three rods, among the four, and form a triangle.

Input
The entry consists of one line containing four integers A, B, C and D (1 ≤ A, B, C, D ≤ 100).

Output
Your program should only produce a line containing only one character, which must be 'S' if it is possible to form the triangle or 'N' if you can not form a triangle.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 762 Bytes
@submission 12/28/19, 5:58:14 PM
*/
#include <stdio.h>

unsigned char ehTriangulo(unsigned char a,unsigned char b,unsigned char c) {
    if ((a >= b+c) || (b >= a+c) || (c >= a+b))
        return 0;
    if ((a*a) < ((b-c)*(b-c)))
        return 0;
    if ((b*b) < ((a-c)*(a-c)))
        return 0;
    if ((c*c) < ((a-c)*(a-c)))
        return 0;
    return 1;
}

int main() {
	unsigned char n[4], i,j,k, eh = 0;

	scanf("%hhu %hhu %hhu %hhu", &n[0], &n[1], &n[2], &n[3]);
	
	for (i = 0; !eh && i < 4; i++)
	for (j = 0; !eh && j < 4; j++)
	for (k = 0; !eh && k < 4; k++) {
	    if ((i == j) || (j == k) || (k == i))
	        continue;
	    if (ehTriangulo(n[i], n[j], n[k]))
	        eh = 1;
	}
	
	if (eh)
	    printf("S\n");
	else
	    printf("N\n");

	return 0;
}