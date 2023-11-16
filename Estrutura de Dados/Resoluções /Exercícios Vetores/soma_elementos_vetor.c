//Crie um programa que leia 10 números inteiros do usuário e armazene-os em um vetor. Em seguida, exiba a soma de todos os elementos do vetor.

#include <stdio.h>
#include <stdlib.h>

int somaVetor(int num){
  
  int vetor[10];
  int soma = 0;
  
  //intera os valores recebidos no vetor e soma
  for(int c = 0; c <10;c++){
    vetor[c] = num;  
    soma += vetor[c]; 
  }

  return soma;
}

int main(){

  int num = 0;
  int cont = 0;
  
  while (cont <= 9){
    
    printf("\nFavor, informe um número inteiro: ");
    scanf("%d", &num);
    printf("\nValor informado: %d\n", num);
    cont++;
  }
  int soma = somaVetor(num);
  printf("\nSoma dos valores = %d ", soma);

  return 0;
}
