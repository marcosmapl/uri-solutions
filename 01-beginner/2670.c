/*
URI Online Judge | 2670
Máquina de Café
By Maratona de Programção da SBC, ACM ICPC 2017 BR Brazil

Timelimit: 1
O novo prédio da Sociedade Brasileira de Computação (SBC) possui 3 andares. Em determinadas épocas do ano, os funcionários da SBC bebem muito café. Por conta disso, a presidência da SBC decidiu presentear os funcionários com uma nova máquina de expresso. Esta máquina deve ser instalada em um dos 3 andares, mas a instalação deve ser feita de forma que as pessoas não percam muito tempo subindo e descendo escadas.

Cada funcionário da SBC bebe 1 café expresso por dia. Ele precisa ir do andar onde trabalha até o andar onde está a máquina e voltar para seu posto de trabalho. Todo funcionário leva 1 minuto para subir ou descer um andar. Como a SBC se importa muito com a eficiência, ela quer posicionar a máquina de forma a minimizar o tempo total gasto subindo e descendo escadas.

Sua tarefa é ajudar a diretoria a posicionar a máquina de forma a minimizar o tempo total gasto pelos funcionários subindo e descendo escadas.

Input
A entrada consiste em 3 números, A1 , A2 , A3 (0 ≤ A1 , A2 , A3 ≤ 1000), um por linha, onde Ai representa o número de pessoas que trabalham no i-ésimo andar.

Output
Seu programa deve imprimir uma única linha, contendo o número total de minutos a serem gastos com o melhor posicionamento possível da máquina.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 468 Bytes
@submission 7/19/18, 5:57:33 PM
*/
#include <stdio.h>

int main (){

   unsigned int a1, a2, a3;
   unsigned int t1 = 0, t2 = 0, t3 = 0;

   scanf("%d",&a1);
   scanf("%d",&a2);
   scanf("%d",&a3);

   t1 = (a2 * 2) + (a3 * 4);
   t2 = (a1 * 2) + (a3 * 2);
   t3 = (a1 * 4) + (a2 * 2);

   if ((t1 <= t2) && (t1 <= t3)) {
      printf("%d\n", t1);
   }
   else if((t2 <= t1) && (t2 <= t3)) {
      printf("%d\n",t2);
   }
   else {
      printf("%d\n",t3);
   }

   return 0;
}