/*
URI Online Judge | 1848
Counting Crow
By Emilio Wuerges, UFFS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1848

Timelimit: 1

As we know, there's a three-eyed crow. What it isn't well known is that the three-eyed crow can foresaw the results of Westeros lottery. Meanwhile every other crow is flying collecting entries for the lottery, the three-eyed crow already knows the results, and when Bran dreams with the three-eyed crow, the crow tells him the result. Bran always remember these dreams very well, however, he can't understand them fast enough to know the result. Your task is write a program to calculate the result from Bran's dream.

During the dream, the crow blinks many times and screams exactly 3 times. Every scream corresponds to a result.

Every blink of the crow communicates a binary number. An open eye means 1 and a closed eye means 0. The left eye is the most significative eye and the right eye is the least significative eye. Every blink this number is added and when the crow screams, the sum is a result.

Input
The input describes, in every line, in order, a scream or a blink of the crow.

A scream is represented by the string caw caw.

A blink is formed by three characters * ou -, representing, respectively, an open eye or a closed eye, from left to right.

Remember that the crow has 3 eyes.

The winning numbers at lottery do not exceed 1000.

Output
The output are 3 lines, each one with one result of the lottery.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 529 Bytes
@submission 12/28/19, 4:11:45 PM
*/
#include <stdio.h>

int main()
{
   char line[8];
   unsigned short number = 0;
   unsigned char caw = 3;
   
   while(caw) {
       fgets(line, sizeof(line), stdin); 
       if (line[0] == 'c') {
           printf("%d\n", number);
           number = 0;
           caw--;
       } else {
            if (line[0] == '*')
                number += 4;
            if (line[1] == '*')
                number += 2;
            if (line[2] == '*')
                number += 1;
       }
   }
   
   return 0;
}	