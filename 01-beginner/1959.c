/*
URI Online Judge | 1959
Regular Simple Polygons
By M.C. Pinto, UNILA BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1959

Timelimit: 1

In Euclidean geometry, a regular polygon is a polygon that is equiangular (all angles are equal in measure) and equilateral (all sides have the same length). A simple polygon is one that does not intersect itself anywhere. Below we can see various mosaics made of regular polygons.
https://www.urionlinejudge.com.br/gallery/images/contests/C_1.jpg

You must write a program that, given the number and the length of sides of a regular polygon, show its perimeter.

Input
The input are two positive integers: N and L, which are, respectively, the number of sides and the length of each side of a regular polygon (3 ≤ N ≤ 1000000 and 1 ≤ L ≤ 4000).

Output
The output is the perimeter P of the regular polygon in a single line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 147 Bytes
@submission 12/28/19, 7:35:39 PM
*/
#include <stdio.h>

int main()
{
    unsigned int n,l;
    
    scanf("%u %u", &n, &l);
    printf("%u\n", (n*l));
    
    return 0;
}