// Escreva um programa que leia dois vetores A e B de 10 elementos cada. Em
// seguida, crie um terceiro vetor C, onde cada elemento seja a soma dos
// elementos correspondentes dos vetores A e B. Exiba o vetor C na tela.

int somaVetores(int vetorA[], int vetorB[]) {

  // Lendo o vetor A

  printf("Informe os elementos do Vetor A: \n");

  for (int c = 0; c < 10; c++) {
    printf("\nVetor A %d: ", c + 1);
    scanf("%d", &vetorA[c]);
    system("clear");
  }

  // Lendo o vetor B
  printf("Agora informe os elementos do vetor B: \n");

  for (int i = 0; i < 10; i++) {
    printf("\nVetor B %d: ", i + 1);
    scanf("%d", &vetorB[i]);
    system("clear");
  }

  // Imprimindo o vetor A e B
  
  printf("\nVetor A: ");
  for (int c = 0; c < 10; c++) {
      printf("%d ", vetorA[c]);
  }

  printf("\nVetor B: ");
  for (int i = 0; i < 10; i++) {
      printf("%d ", vetorB[i]);
  }

  // Criando o vetor C

  int vetorC[10];

  for (int x = 0; x < 10; x++){
    vetorC[x] = vetorA[x] + vetorB[x];
  }

  // Imprimindo o vetor C

  printf("\nVetor C (Soma de A e B): ");
  for(int d = 0; d < 10; d++){
    printf("%d ", vetorC[d]);
  }

  return 0;
}

int main() {
  int vetorA[10];
  int vetorB[10];

  somaVetores(vetorA, vetorB);

  return 0;
}
