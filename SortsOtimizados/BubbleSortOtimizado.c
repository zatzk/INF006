//Alunos: Jean Luiz, Luis Garrido.
#include <stdio.h>

int main(){
    int n,c,d,troca,cont,vetor[100];
//O "vetor[]" armazenará os valores dos inteiros
//"n,c,d" fazem contagem de loop e posições do vetor
//"troca" serve de auxiliar na troca de inteiro entre posições
//"cont" serve como sinalizador


  //"n" é o numero totais de inteiros a serem reordenados
  printf("Entre com o numero de elementos\n");
  scanf("%d", &n); //captura os valores de "n"
  //EXEMPLO: n = 3;


//mostra ao usuario o limite de posicoes as serem analisadas
  printf("Digite %d inteiros\n", n); 
//EX: Digite 5 elementos inteiros:


//loop com contador "c"
//preencherá as posições no "vetor[]" até o limite de "n"
  for(c=0;c<n;c++){ // loop de 0 a n;
    scanf("%d", &vetor[c]); //EX: v[0]=12, v[1]=5, v[2]=6, v[3]=1, v[4]=7 
  }

  for(c=0;c<(n-1);c++){ //loop de 0 a "n-1; EXEMPLO: 0 a 4
    cont=0; //aqui "cont" recebe 0
    for(d=0;d<(n-1-c);d++){ //loop otimizado para diminuir os passos a cada retorno
      if(vetor[d]>vetor[d+1]){ // reordenação dos inteiros
        troca=vetor[d];
        vetor[d]=vetor[d+1];
        vetor[d+1]=troca;
        cont=1;
      }
    }
    if(cont==0){ //quando "cont" for 0 significa que ele não recebeu 1 no if anterior
        break; // o loop é quebrado
    }
  }


  printf("Ordenacao crescente:\n");
  for (d=0;d<n;d++){
    printf("%d\n", vetor[d]);
    //imprime os valores ja reordenados de forma crescente
  }
}