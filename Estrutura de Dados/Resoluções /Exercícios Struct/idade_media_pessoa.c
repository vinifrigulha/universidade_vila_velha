// Crie uma função que receba um array de estruturas "Pessoa" e seu tamanho 
// e calcule a média de idade e a média de altura das pessoas do array.

#include <stdio.h>

struct Pessoa{

  char nome[40];
  int idade;
  double altura;

};

int mediasPessoas(struct Pessoa pessoa[], int tam){

  // Lendo os dados das pessoas

  for(int c = 0; c < tam; c++){

    printf("\nPESSOA %d:", c + 1);

    printf("\nNome: ");
    scanf("%s", &pessoa[c].nome);
    
    printf("Idade: ");
    scanf("%d", &pessoa[c].idade);
    
    printf("Altura: ");
    scanf("%lf", &pessoa[c].altura);
    system("clear");
  }

  // Exibindo os resultados

  printf("--- PESSOAS CADASTRADAS ---\n");
  
  for(int i = 0; i < tam; i++){
    printf("\nPessoa %d: \n", i + 1);
    printf("\nNome: %s", pessoa[i].nome);
    printf("\nIdade: %d anos", pessoa[i].idade);
    printf("\nAltura: %.2lf metros\n", pessoa[i].altura);
  }

  
  double somaIdades = 0;
  double mediaIdades = 0;
  
  //Calculando média das idades
  for(int x = 0; x < tam; x++){
    somaIdades += pessoa[x].idade;
    mediaIdades = somaIdades/tam;
  }

  //Calculando média das alturas

  double somalturas = 0;
  double mediaAlturas = 0;

  for(int y = 0; y < tam; y++){
    somalturas += pessoa[y].altura;
    mediaAlturas = somalturas/tam;
  }

  printf("\nMédia de Idades: %.2lf", mediaIdades);
  printf("\nMédia de Alturas: %.2lf", mediaAlturas);

  return 0;
}

int main(){
  
  struct Pessoa pessoa[3];
  int tam;

  printf("Informe o número de pessoas que deseja cadastrar: ");
  scanf("%d", &tam);
  mediasPessoas(pessoa,tam);

  return 0;
}
