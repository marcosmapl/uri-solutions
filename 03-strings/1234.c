/*
URI Online Judge | 1234
Dancing Sentence
By TopCoder*  USA
https://www.urionlinejudge.com.br/judge/en/problems/view/1234

Timelimit: 1

A sentence is called dancing if its first letter is uppercase and the case of each subsequent letter is the opposite of the previous letter. Spaces should be ignored when determining the case of a letter. For example, "A b Cd" is a dancing sentence because the first letter ('A') is uppercase, the next letter ('b') is lowercase, the next letter ('C') is uppercase, and the next letter ('d') is lowercase.

Input
The input contains several test cases. Each test case is composed by one line that contais a string sentence. This string will contain between 1 and 50 characters ('A'-'Z','a'-'z' or space ' '), inclusive, or at least, one letter ('A'-'Z','a'-'z').

Output
Turn the sentence into a dancing sentence (like following examples) by changing the cases of the letters where necessary. All spaces in the original sentence must be preserved, ie, " sentence " must be converted in " SeNtEnCe ".

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.032s
@size 513 Bytes
@submission 7/27/18, 9:39:54 AM
*/
#include <stdio.h>
#include <ctype.h>

int main() {
  char lala[60], c='b';
  int i,i2;
  while(scanf("%c",&c)!=EOF) {
    for(i=0;i<60;i++) lala[i]='\0';
    for(i=i2=0;c!='\n';i2++) {
      if(c==' ') {
        i2--;
        lala[i]=c;
        i++;
      }
      else if(i2%2==0) {
        lala[i]=toupper(c);
        i++;
      }
      else {
        lala[i]=tolower(c);
        i++;
      }
      scanf("%c",&c);
    }
    lala[i]='\0';
    printf("%s\n",lala);
  }
  return 0;
}