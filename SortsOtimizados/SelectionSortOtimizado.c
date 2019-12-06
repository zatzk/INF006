//Alunos: Jean luiz, Luis carlos garrido.

#include<stdio.h>
int main(){
  int vetor[100], n, c, d, posicao, troca;
//O "vetor[]" armazenará os valores dos inteiros
//"n,c,posicao" fazem contagem de loop e posições do vetor
//"troca" serve de auxiliar na troca de inteiro entre posições


//"n" é o numero totais de inteiros a serem reordenados
  printf("Entre com o numero de elementos\n");
  scanf("%d", &n); //captura os valores de "n"
//EXEMPLO: n = 3;


//mostra ao usuario o limite de posicoes as serem analisadas
  printf("Digite %d inteiros\n", n); 
//EX: Digite 3 elementos inteiros:


//loop com contador "c"
//preencherá as posições no "vetor[]" até o limite de "n"
  for (c=0;c<n;c++){ // loop de 0 a n;
    scanf("%d", &vetor[c]); //EX: v[0]=12, v[1]=5, v[2]=6
  }
    
  for(c=0;c<(n-1);c++){ //loop de 0 a "n-1; EXEMPLO: 0 a 2
    posicao = c; //EX: primeiro loop: posicao = c, logo posicao = 0

    for(d=c+1;d<n;d++){ //EX: primeiro loop: d = c+1 logo d=1
      if (vetor[posicao] > vetor[d]){
        //EX: se "vetor[posicao]"(posicao=0) que é equivalente a "vetor[0]=12"
        //for maior que "vetor[d]"(d=1) que é equivalente a "vetor[1]=5"
        posicao = d; //"posicao" recebe "d", logo "posicao" = 1
      } 
    }
    if(posicao!=c){ //EX: ao receber 1 "posicao" != "c", ja que "c" = 0
      troca = vetor[c]; //então troca recebe "vetor[c] equivalente a "vetor[0]=12"
      vetor[c] = vetor[posicao]; 
      //"vetor[c]" equivalente a "vetor[0]=12" recebe "vetor[posicao]" equivalente a "vetor[1]=5"
      vetor[posicao] = troca; //"vetor[posicao]" equivalente a "vetor[1]=5" recebe troca
      //logo "vetor[0]=5" e "vetor[1]=12"
    }
  }

  printf("Ordenacao crescente:\n");
//loop de 0 a "n"
  for (c=0;c<n;c++){
    printf("%d\n", vetor[c]);
    //imprime os valores ja reordenados de forma crescente
  }
   
  return 0;
}