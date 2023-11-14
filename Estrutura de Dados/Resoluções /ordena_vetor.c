//Faça um programa que leia um vetor de 10 elementos e ordene-o em ordem crescente. Em seguida, exiba o vetor ordenado.

#include <stdio.h>

int vetorOrdenado(int vetor[]){

  // Recebendo o vetor do usuário  
  printf("Informe os valores do vetor: ");
  
  for(int c = 0; c < 5; c++){
    
    printf("\nValor %d: ", c + 1);
    scanf("%d", &vetor[c]);
    
  } 

  // Imprimindo o vetor original
  printf("\nVetor informado: ");

  for(int x = 0; x < 5; x++){
    printf("%d ", vetor[x]);
  }

  // Ordena o vetor 
  for(int x = 0; x < 4; x++){
    for(int i = 0; i < 4; i++){
      if(vetor[i] > vetor[i + 1]){
        
        int aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux; 
      }    
    }
  }

  // Imprime o vetor ordenado
  printf("\nVetor em ordem crescente: ");
  for(int y = 0; y < 5; y++){
    printf("%d ", vetor[y]);
  }
  
  return 0;
}

int main(){

  int vetor[5];
  vetorOrdenado(vetor);

  return 0;
}
