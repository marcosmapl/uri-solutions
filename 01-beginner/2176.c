/*
URI Online Judge | 2176
Parity
By Cristhian Bonilha, UTFPR BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2176

Timelimit: 1
The popularity of WiFi networks increased the loss rate of data being transferred, as several environment factors can easily compromise the data during traffic. The main goal of URI, Unity of Recovery of Information, is to identify and correct errors in messages being sent through WiFi networks.

The technique used by URI to identify errors is the parity test, which can be described as follows: Be S a message that is going to be sent from one device to another. Before S is sent, an extra bit B is added to the end of the binary representation of S. If S has an even number of bits of value 1, the extra bit B will have value 0. Otherwise, if S has an odd number of bits of value 1, B will have value 1. In this way, after the insertion of the bit B, the message S will have an even number of bits of value 1.

When the receiver gets the message S he counts how many bits of value 1 the message has. If the quantity is even, it means that the message was transferred succesfully. Otherwise, it means that the message had a modification and is not correct.

Your task is to write an algorithm that makes the insertion of the extra bit B in the message S, ensuring that after the insertion the message S has an even number of bits of value 1.

Input
Each test case consists of one line containing the message S, which has at least 1 and at most 100 bits.

Output
Print one line containing the message S with the extra bit B.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 320 Bytes
@submission 1/26/20, 8:49:54 PM
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    unsigned char i, c = 0;

    scanf("%s", s);
    for (i=0; s[i]; i++) {
        if (s[i] == '1')
            c++;
    }
    
    if (c % 2 == 1)
        printf("%s1\n", s);
    else
        printf("%s0\n", s);

    return 0;
}
