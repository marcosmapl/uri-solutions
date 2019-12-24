/*
URI Online Judge | 2542
Iu-Di-Oh!
By Ricardo Oliveira, UFPR BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2542

Timelimit: 1

Iu-di-oh! is a card game really popular among kids! Every Iu-di-oh! player has his own deck containing many cards. Each card contains N attributes (such as power, speed, smartness, etc.). Attributes are numbered from 1 to N and are given as positive integers.

A match of Iu-di-oh! is always played by two players. At the beginning of the match, each player chooses exactly one card from his deck. Then, an attribute is randomly chosen. The player whose the chosen attribute is greater in the card he choose wins the match. If the such attribute is equal in both cards, there is a tie.

Marcos and Leonardo are in the big final of the Brazilian Iu-di-oh! championship. The great prize is a Dainavision (that is almost as good as a Plaisteition 2!). Given the deck of both players, the card each one chooses and the chosen attribute, determine the winner!

Input
The input contains several test cases. The first line of each test case contains an integer N (1 ≤ N ≤ 100), the number of attributes each card contains. The second line contains two integers M and L (1 ≤ M, L ≤ 100), the number of cards in Marcos’ and Leonardo’s deck, respectively.

Next M lines describe Marcos’ deck. His cards are numbered from 1 to M, and i-th line describes the i-th card. Each line contains N integers ai,1,ai,2,..., ai,N (1 ≤ ai,j ≤ 109). Integer ai,j indicates the j-th attribute of the i-th card.

Next L lines describe Leonardo’s deck. His cards are numbered from 1 to L and are described in the same way as Marcos’ deck.

Next line contains two integers CM and CL (1 ≤ CM ≤ M, 1 ≤ CL ≤ L), the cards chosen by Marcos and Leonardo, respectively. Finally, the last line contains an integer A (1 ≤ A ≤ N) indicating the chosen attribute.

The input ends with end-of-file (EOF).

Output
For each test case, print a line containing “Marcos” if Marcos wins the match, “Leonardo” if Leonardo wins the match, or “Empate” in the case of a tie (without quotes).

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.032s
@size 491 Bytes
@submission 7/27/18, 10:46:58 AM
*/
#include <stdio.h>

int main() {
  int n,m,l,i,j;
  while(scanf("%d %d %d",&n,&m,&l)!=EOF) {
    int mar[m][n],leo[l][n];
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++) {
        scanf("%d",&mar[i][j]);
      }
    }
    for(i=0;i<l;i++) {
      for(j=0;j<n;j++) {
        scanf("%d",&leo[i][j]);
      }
    }
    scanf("%d %d %d",&m,&l,&n);
    printf("%s\n",(mar[m-1][n-1]==leo[l-1][n-1])?"Empate":(mar[m-1][n-1]>leo[l-1][n-1])?"Marcos":"Leonardo");
  }
  return 0;
}