// Escreva um programa que preencha um vetor com 10 números inteiros e, em seguida, exiba os elementos do vetor na ordem inversa.

#include <stdio.h>
#include <stdlib.h>

int vetorInverso(int vetor[]){

  // Preenchendo o vetor

  for(int c = 0; c < 10; c++){
    vetor[c] = rand() % 100 + 1;
  }

  printf("Vetor preenchido: \n");
  for(int c = 0; c < 10; c++){
    printf("%d ", vetor[c]);
  }

  printf("\nVetor na ordem inversa: ");
  for(int c = 9; c >= 0; c--){
    printf("%d ", vetor[c]);
  }

  return 0;
}

int ex06(){

  int vetor[10];
  vetorInverso(vetor);

  return 0;
}
