//Crie um programa que leia um vetor de 10 elementos inteiros e verifique se ele está em ordem crescente

#include <stdio.h>
#include <stdlib.h>

int recebeVetor(int vetor[10]){

  printf("Informe os valores do vetor...\n");
  
  for(int c = 0; c < 10; c++){
 
    printf("\nElemento %d: ", c+1);
    scanf("%d", &vetor[c]);
    
    }
  
  int ordemCrescente = 0;

  // Verifica se o vetor está em ordem crescente
  for(int i = 0; i < 9; i++){

    if (vetor[i] > vetor[i +1]){ 
      ordemCrescente = 0;
      break;
    }   
  }
  
  if (ordemCrescente){
    printf("O vetor não está em ordem crescente.");
  }
  else{
    printf("O vetor está em ordem crescente.");
  }

  return 0;
}

int main(){

  int vetor[10];
  recebeVetor(vetor);

  return 0;
}
