/*
URI Online Judge | 2453
Língua do P
Por OBI - Olimpíada Brasileira de Informática 2014 BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2453

Timelimit: 1

Uma brincadeira que crianças adoram é se comunicar na língua do P, acrescentando pê antes de cada sílaba, como uma forma de código para dificultar que outras pessoas entendam a conversa (pê-va pê-mos pê-no pê-ci pê-ne pê-ma?).

Jacy e Kátia adaptaram a língua do P para mensagens eletrônicas, acrescentando a letra P minúscula ‘p’ antes de cada letra das palavras de uma mensagem. Um exemplo de mensagem codificada e a respectiva mensagem decodificada é mostrada na figura abaixo.
https://resources.urionlinejudge.com.br/gallery/images/contests/UOJ_177_J.png

Sua tarefa é escrever um programa que decodifique uma mensagem escrita na língua do P eletrônica de Jacy e Kátia.

Entrada
A entrada consiste de uma única linha, contendo uma mensagem escrita na língua do P eletrônica de Jacy e Kátia, a mensagem contém apenas letras maiúsculas e minúsculas e espaços em branco, a mensagem tem entre 1 e 1000 caracteres, não há dois espaços em branco consecutivos na mensagem.

Saída
Seu programa deve produzir uma única linha, contendo a mensagem decodificada.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 374 Bytes
@submission 7/27/18, 9:35:32 AM
*/
#include <stdio.h>

int main() {
  char lala[1200], c='b';
  int i,i2;
  
  for(i=0;i<1200;i++) lala[i]='\0';
  
  scanf("%c",&c);
  
  for(i=i2=0;c!='\n';i2++) {
    if(c==' ') {
      i2--;
      lala[i]=c;
      i++;
    }
    else if(i2%2==1) {
      lala[i]=c;
      i++;
    }
    scanf("%c",&c);
  }
  
  lala[i]='\0';
  
  printf("%s\n",lala);
  
  return 0;
}