// Implemente um programa que leia um vetor com 10 números inteiros e calcule a média aritmética dos elementos.

#include <stdio.h>

int mediaVetor(int vetor[]){

  // Lendo o vetor do usuário

  printf("Informe os valores do vetor: ");

  for(int c = 0; c < 5; c++){
    printf("\nElemento %d: ", c + 1);
    scanf("%d", &vetor[c]);
  }

  // Imprimindo o vetor

  printf("\nVetor informado: ");

  for(int i = 0; i < 5; i++){
    printf("%d ", vetor[i]);
  }

  // Calculando a média aritmética

  int tam = 5;
  int soma = 0;

  for (int x = 0; x < 5; x++){
    soma += vetor[x];
  }

  int media = soma / tam;

  printf("\nMédia Aritmética do Vetor: ");
  printf("%d", media);

  return 0;
}

int main(){

  int vetor[5];
  mediaVetor(vetor);

  return 0;
}
