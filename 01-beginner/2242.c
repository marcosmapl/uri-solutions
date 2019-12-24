/*
URI Online Judge | 2242
Huaauhahhuahau
By Maratona de Programação da SBC 2016 BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2242

Timelimit: 1

In chats, it is very common among young people and adolescents use strings of letters, which often seem random to represent laughter. Some common examples are:

huaauhahhuahau
hehehehe
ahahahaha
jaisjjkasjksjjskjakijs
huehuehue

Claudia is a young programmer who was intrigued by the sound of "digital laughter." Some of them she can not even pronounce! But she realized that some of them seem better convey the feeling of laughter than others. The first thing she noticed is that the consonants do not interfere in how digital laughter influence the feeling of transmission. The second thing she noticed is that the funniest digital laughter are those in which the sequences of vowels are the same when read in the natural order (from left to right) or in reverse order (from right to left), ignoring consonants. For example, "hahaha" and "huaauhahhuahau" are among the funniest laughs while "riajkjdhhihhjak" and "huehuehue" are not among the funniest.

Claudia is very busy with the statistical analysis of digital laughter and asked for his help to write a program that determines, to a digital laugh, if she is the funniest or not.

Input
The input comprises a line containing a sequence of up to 50 characters, formed only by small letters without accent. Vowels are the letters 'a', 'e', 'i', 'o', 'u'. The sequence contains at least one vowel.

Output
Your program should produce a line containing a character, "S" if the laughter is of the funniest, or "N" otherwise.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 553 Bytes
@submission 7/27/18, 9:31:13 AM
*/
#include <stdio.h>
#include <string.h>

int ispal(const char *s);

int main() {
  char lala[60], c='b';
  int i;
  
  for(i=0;i<60;i++) lala[i]='\0';
  
  scanf("%c",&c);
  
  for(i=0;c!='\n';) {
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
      lala[i]=c;
      i++;
    }
    scanf("%c",&c);
  }
  
  lala[i]='\0';
  
  printf("%c\n",(ispal(lala))?'S':'N');
  
  return 0;
}

int ispal(const char *s)
{
    const char *p = s + strlen(s) - 1;
    while (s < p)
        if (*p-- != *s++)
            return 0;

    return 1;
}