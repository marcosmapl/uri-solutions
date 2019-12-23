/*
URI Online Judge | 1019
Time Conversion
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1019

Timelimit: 1

Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 288 Bytes
@submission 5/23/18, 9:01:44 AM
*/
#include <stdio.h>
 
int main() {
 
    unsigned int sec, min, hour;
    scanf("%u", &sec);
    
    hour = sec / (3600);
    
    sec -= (hour * 3600);
    min = sec / 60;
    
    sec -= (min * 60);
    
    printf("%u:%u:%u\n", hour, min, sec);
 
    return 0;
}