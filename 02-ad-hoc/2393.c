/*
URI Online Judge | 2393
O Mar não está para Peixe
Por Olimpíada Brasileira de Informática 2011 BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2393

Timelimit: 1

Em um arquipélago no meio do Oceano Pacífico a economia é regida pela pesca, pois o peixe é o principal alimento disponível. Ultimamente, a população desse arquipélago tem aumentado drasticamente, o que levou a um grande aumento da pesca, e, consequentemente, a problemas.

Neste arquipélago, cada pescador vai diariamente ao alto mar com a intenção de conseguir trazer o maior número de peixes para o seu vilarejo. Com a expansão da pesca, os pescadores estão começando a jogar suas redes de pesca por cima das de outros pescadores. Com isso, os pescadores perdem, pois apenas o primeiro pescador pega os peixes da intersecção entre as redes.

A Associação dos Pescadores da ilha decidiu fazer um levantamento para descobrir quanto do mar está de fato sendo aproveitado, ou seja, qual a área do mar que está coberta por pelo menos uma rede de pesca.

Como há muitas intersecções entre as redes de pesca, é muito difícil para a associação calcular a área total da região coberta pelas redes. Por este motivo, eles pediram para que você escrevesse um programa para resolver este problema.

Como é muito difícil navegar pelo mar, os pescadores sempre jogam as redes de forma que as regiões cobertas por cada rede são sempre retângulos com lados paralelos aos eixos, se imaginarmos o mar como um plano cartesiano.

Entrada
A primeira linha da entrada possui um inteiro N (1 ≤ N ≤ 100)indicando o número de redes que foram lançadas. As próximas N linhas descrevem as regiões cobertas pelas redes: cada uma contém quatro inteiros Xi e Xf , Yi e Yf  (1 ≤ Xi ≤ Xf ≤100) e (1 ≤ Yi ≤ Yf ≤ 100). A região coberta pela rede em questão contém todo ponto (X,Y) tal que Xi ≤ X ≤ Xf e Yi ≤ Y ≤ Yf.

Saída
A saída deve conter apenas uma linha contendo a área da região do mar realmente aproveitada pelos pescadores, ou seja, a área total da região do mar coberta por pelo menos uma rede de pesca.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 531 Bytes
@submission 7/27/18, 9:32:04 AM
*/
#include <stdio.h>

int main() {
    int n,i,j,k,pr[2000][200],x1,x2,y1,y2;
    int atot=0;

    scanf("%d",&n);

    for(i=0;i<1200;i++) {
      for(j=0;j<120;j++) {
        pr[i][j]=0;
      }
    }
 
    for(i=0;i<n;i++) {
      scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
      for(j=x1;j<x2;j++) {
          for(k=y1;k<y2;k++) {
            pr[j][k]=1;
          }
      }
    }
 
    for(i=0;i<1200;i++) {
      for(j=0;j<120;j++) {
        atot+=pr[i][j];
      }
    }
 
    printf("%d\n",atot);
 
    return 0;
}