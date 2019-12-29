/*
URI Online Judge | 1864
Our Days Are Never Coming Back
By Leandro Zatesko, UFFS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1864

Timelimit: 1

So, have you liked the Winter School this year? In order to make this School happen, many have worked, whether in writing the problems, in configuring the Portal, in making the arrengements for the event or in raising the funds. Our special acknowledgement this year goes to Professor Ricardo Oliveira, who has not only accepted our invitation to come and teach the workshops but has also been participating on the organisation of this School. We are sure that his experience and his career at ICPC as contestant and as coach have motived and inspired us all.

We hope you have enjoyed these last days in Essos and in Westeros, we hope you have learned a lot and had fun. But it is not only in Essos and in Westeros that you should have fun. Here, in Beyond the Wall, programming is also fun. Keep studying, keep training, and more and more. What is important is the path you choose to pursue from now on. Our advice is that you should always enjoy every single moment, every workshop, every school, every training session, every time practicing or studying at home. Our days are never coming back.

Input
The input consists of a single integer N (1 ≤ N ≤ 34) in a line.

Output
Print the N first characters of Søren Kierkegaard's quote defined by the letters underlined in this problem statement. Be careful, for no blank space has been underlined — you are supposed to guess the number and the location of the blank spaces at the sentence. The only line of output shall consist only of capital letters and blank spaces, and shall be ended by end-of-line.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 193 Bytes
@submission 12/28/19, 4:42:34 PM
*/
#include <stdio.h>

int main()
{
    char f[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    unsigned char n,i = 0;
   
    scanf("%hhu", &n);
    printf("%.*s\n", n, f);
    return 0;
}