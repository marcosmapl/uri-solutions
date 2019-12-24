/*
URI Online Judge | 2340
Feira de Bactérias
Por OBI - Olimpíada Brasileira de Informática 2009 BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2340

Timelimit: 1

Bruno é um biólogo apaixonado por sua profissão. Sua especialidade é estudar o comportamento de bactérias. Por isso, ele possui em seu laboratório centenas de colônias de diferentes tipos desses microorganismos.

Nesta semana ele viu o anúncio de um evento inusitado: uma feira de bactérias. Nessa feira, vários fornecedores estarão vendendo diferentes tipos de bactérias. Cada tipo de bactéria é vendido em uma placa de vidro, já preparada para a formação de uma colônia de bactérias. Cada placa de vidro é vendida com apenas uma bactéria inicialmente.

Bruno deu uma olhada no catálogo com os tipos de bactérias que estarão à venda na feira, e notou algumas coisas interessantes:

Todos os tipos de bactérias à venda terão o mesmo preço.
Todas as bactérias (de todos os tipos) se subdividem todas as noites para gerar outras bactérias. Por exemplo, a bactéria da colônia de tipo X se subdivide em 2 outras bactérias todas as noites. Assim, no primeiro dia teremos só uma bactéria na colônia. No dia seguinte, teremos 2, e no próximo, 4. A quantidade de divisões de uma bactéria depende do seu tipo.
O crescimento da colônia cessa após um determinado número de dias, por causa da escassez de alimento. A quantidade de dias em que uma colônia cresce depende do tipo de bactéria.
É final de mês e Bruno já gastou quase todo o seu dinheiro. Assim, resolveu que irá comprar apenas uma colônia de bactérias. No entanto, ele pretende comprar a colônia que forneça a maior quantidade de bactérias ao final do período de crescimento da mesma.

Ele tem um catálogo mostrando os tipos de bactérias à venda. Para cada tipo de bactéria, o catálogo informa a quantidade de bactérias geradas por uma bactéria desse tipo a cada divisão e por quantos dias a população da colônia crescerá. Porém, a calculadora que ele tem em casa não é suficiente para que ele faça os cálculos necessários para decidir qual é a melhor colônia a comprar.

Bruno pediu sua ajuda para decidir qual é o melhor tipo de bactéria para a compra. Lembre que para Bruno o melhor tipo de bactéria é aquele cuja colônia, ao final do período de crescimento, terá a maior quantidade de bactérias.

Você deve supor que não haverá duas colônias com a mesma população final de bactérias.

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado).

A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 50.000) representando a quantidade tipos de bactérias no catálogo. Cada uma das N linhas seguintes contém informações sobre um tipo de bactéria: a primeira dessas linhas contém a informação da bactéria de tipo 0, a segunda dessas linhas contém a informação sobre a bactéria de tipo 1, e assim por diante. A última dessas linhas contém a informação da bactéria de tipo N − 1.

A informação para cada tipo de bactéria é composta por dois números inteiros D e C (1 ≤ D ≤ 2.000 e 1 ≤ C ≤ 5.000), onde D é quantidade de bactérias que cada bactéria deste tipo gera ao se dividir numa noite, e C é a quantidade de dias que a população de bactérias crescerá.

Saída
Seu programa deve imprimir, na saída padrão, um número inteiro entre 0 e N − 1 representando o tipo da bactéria que Bruno deverá comprar.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 401 Bytes
@submission 7/20/18, 10:51:16 AM
*/
#include <stdio.h>
#include <math.h>

int main() {
  int n, num, i;
  float max=-1, maxm=-1;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++) {
    int a,b;
  
    scanf("%d %d",&a,&b);
  
    if(max==-1) {
      max=log(a);
      maxm=b;
      num=i;
    }
    else {
      if(max*maxm<(log(a)*b)) {
        max=log(a);
        maxm=b;
        num=i;
      }
    }
  }
  printf("%d\n",num);

  return 0;
}
