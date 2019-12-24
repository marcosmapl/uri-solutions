/*
URI Online Judge | 2465
Passa Bolinha
Por OBI - Olimpíada Brasileira de Informática 2014 BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2465

Timelimit: 1

O professor Miguel desafiou os alunos do colégio onde ele leciona com uma brincadeira que exige muita atenção! No pátio do colégio, os alunos formam um quadrado com N fileiras e N colunas, de modo que a primeira fileira esteja voltada para o norte. Cada um dos N2 alunos segura uma bandeira e tem um número colado na camiseta. Inicialmente, as bandeiras estão abaixadas e os alunos estão voltados para o norte. Todos os alunos têm que seguir exatamente o mesmo comportamento:

Ao receber a bolinha, levanta sua bandeira e realiza a seguinte ação quatro vezes, em sequência:
– Vira-se 90 graus no sentido horário. Se o colega que ficou à sua frente tiver um número na camiseta maior ou igual ao seu, e estiver com a bandeira abaixada, passa a bolinha ao colega e aguarda que ele lhe devolva a bolinha;

Devolve a bolinha a quem lhe passou a bolinha inicialmente.
Nesta tarefa, você deve escrever um programa que, dados os números nas camisetas de cada aluno, e a posição do aluno a quem o professor Miguel vai entregar a bolinha, calcule quantas bandeiras estarão levantadas ao final, quando esse aluno devolver a bolinha ao professor. Por exemplo, a parte direita da figura abaixo mostra que sete alunos vão levantar a bandeira se o professor entregar inicialmente a bolinha ao aluno na fileira 3, coluna 1, como indicado na parte esquerda da figura.
https://resources.urionlinejudge.com.br/gallery/images/contests/UOJ_178_L.png

Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), o número de fileiras (que é igual ao de colunas). A segunda linha contém dois números, I e J (1 ≤ I, J ≤ N), indicando respectivamente, a fileira e a coluna do aluno a quem o professor Miguel entregará a bolinha. As N linhas seguintes contém N inteiros cada uma, indicando os números que estão nas camisetas dos alunos (os números nas camisetas estão entre 1 e 9, inclusive).

Saída
Seu programa deve imprimir apenas uma linha contendo um inteiro, o número de bandeiras que estarão levantadas ao final.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 877 Bytes
@submission 7/27/18, 9:41:51 AM
*/
#include <stdio.h>

int foi[120][120],n;
int passa(int pessoas[120][120], int y, int x, int val);

int main()
{
    int alunos[120][120],y,x,i,j;
    
    for(i=0;i<120;i++) 
    	for(j=0;j<120;j++) 
    		foi[i][j]=0;
    scanf("%d %d %d",&n,&y,&x);
    y--;x--;
    
    for(i=0;i<n;i++) 
    	for(j=0;j<n;j++) 
    		scanf("%d",&alunos[i][j]);
    printf("%d\n",passa(alunos,y,x,1));
    
    return 0;
}

int passa(int pessoas[120][120], int y, int x, int val) {
    foi[y][x]=1;
    
    if(x+1<n && pessoas[y][x+1]>=pessoas[y][x] && !foi[y][x+1]) 
    	val = passa(pessoas,y,x+1,val+1);
    if(y+1<n && pessoas[y+1][x]>=pessoas[y][x] && !foi[y+1][x]) 
    	val = passa(pessoas,y+1,x,val+1);
    if(x-1>=0 && pessoas[y][x-1]>=pessoas[y][x] && !foi[y][x-1]) 
    	val = passa(pessoas,y,x-1,val+1);
    if(y-1>=0 && pessoas[y-1][x]>=pessoas[y][x] && !foi[y-1][x]) 
    	val = passa(pessoas,y-1,x,val+1);
    
    return val;
}