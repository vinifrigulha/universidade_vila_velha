// Crie um programa que leia um vetor de 10 elementos inteiros e verifique quantos números são maiores do que 50.

int verifica50(int vetor[]){

  for(int c = 0; c < 10; c++){
    printf("\nElemento %d: ", c + 1);
    scanf("%d",&vetor[c]);
  }

  int maior50 = 0;

  for(int i = 0; i < 9; i++){
    if (vetor[i] > 50){
      maior50++;
    }
  }
  printf("\nQuantidade de valores maiores que 50: %d ",maior50);

  return 0;
}

int main(){
  
  int vetor[10];
  verifica50(vetor);

  return 0;
}
