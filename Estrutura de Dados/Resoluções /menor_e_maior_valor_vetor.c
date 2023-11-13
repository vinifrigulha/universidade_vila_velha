 // Escreva um programa que leia um vetor de 10 elementos inteiros e encontre o maior e o menor valor presente nesse vetor. Exiba esses valores na tela.

#include <stdio.h>
#include <stdlib.h>

int maiorMenor(int vetor[]){

  // Recebendo o vetor

  printf("Informe os valores do vetor: \n");
  
  for(int c = 0; c < 10; c++)
  {
    printf("\nElemento %d: ", c + 1);
    scanf("%d", &vetor[c]);
    system("clear");
  }

  
  printf("\nVetor completo: ");
  for(int i = 0; i < 10; i++)
  {
    printf("%d ", vetor[i]);
  }

  
  int maiorValor = vetor[0];
  int menorValor = vetor[0];

  // Verificando o maior valor
  for(int x = 0; x < 10; x++){
    
    for(int y = 0; y < 10; y++)
    {
      if(vetor[x] > maiorValor)
      {
        maiorValor = vetor[x];
      }
    }
  }

  // Verificando o menor valor
  for(int x = 0; x < 10; x++){

    for(int y = 0; y < 10; y++)
    {
      if(vetor[x] < menorValor)
      {
        menorValor = vetor[x];
      }
    }
  }

  printf("\nMaior Valor: %d", maiorValor);
  printf("\nMenor Valor: %d", menorValor);

  return 0;
}

int main(){
  
  int vetor[10];
  maiorMenor(vetor);

  return 0;
}
