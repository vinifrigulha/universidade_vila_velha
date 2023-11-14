// Faça um programa que leia um vetor de 10 elementos e substitua todos os valores negativos por zero. Em seguida, exiba o vetor modificado.

#include <stdio.h>

int substituirNegativos(int vetor[]){

  // Iterando os valores recebidos no vetor

  printf("Informe os valores do vetor: ");
  for(int c = 0; c < 3; c++){
    printf("\nValor %d:", c+1);
    scanf("%d", &vetor[c]);
  }

  //Imprimindo o vetor completo

  printf("\nVetor completo: ");
  for(int i = 0; i < 3; i++){
    printf("%d ", vetor[i]);
  }

  //Substituindo negativos
  for(int x = 0; x < 3; x++){
    if (vetor[x] < 0){
      vetor[x] = 0;
    }
  }

  //Imprimindo novo vetor
  printf("\nVetor após a substituição: ");
  for(int i = 0; i < 3; i++){
    printf("%d ", vetor[i]);
  }

  return 0;
}

int ex08(){

  int vetor[3];
  substituirNegativos(vetor);

  return 0;
}
