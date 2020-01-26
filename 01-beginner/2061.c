/*
URI Online Judge | 2061
Closing Tabs
By Lucas Hermann Negri, UTFPR BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2061

Timelimit: 1
Péricles has an unique interest in history. With his up-to-date internet browser chromed fox, he wandered in the most obscure sites about ancient Greek mythology.

By some type of cosmic irony, Péricles' browser was infected by a malware with a peculiar characteristic: every time Péricles closed a tab in his browser, another two opened! However, when Péricles clicked one of the ads (all tabs were infested with ads), the tab crashed, and no other tabs were opened.

Your taks is to compute the final number of tabs of Péricles's browser, knowing the initial number of tabs and the actions taken by Péricles. There are two possible actions: fechou (when Péricles closed a tab) and clicou (when Péricles clicked on an ad).

Input
The input is initiated by a line containing two integer numbers, N e M (0 < N, M < 500), representing the initial number of tabs and the number of actions performed by Péricles. Each subsequent line contains an action (fechou or clicou). Naturally, the current number of tabs is always greater of equal to zero.

Output
The output must consist of a line containing the final number of tabs.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 294 Bytes
@submission 1/23/20, 8:05:19 PM
*/
#include <stdio.h>

int main()
{
    unsigned short n,m;
    char s[7];
    
    scanf("%hu %hu", &n, &m);
    
    while (m--) {
        scanf(" %s", s);
        if (s[0] == 'c')
            n--;
        else
            n++;
    }
    printf("%hu\n", n);

    return 0;
}
