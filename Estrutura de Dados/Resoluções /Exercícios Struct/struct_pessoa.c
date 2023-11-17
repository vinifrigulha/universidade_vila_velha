// Crie uma função que receba como parâmetro um array de estruturas "Pessoa" e seu tamanho. 
// Essa função deve ler os dados de várias pessoas (nome, idade e altura) e armazená-los nas estruturas. 
// Em seguida, exiba as informações na tela.

#include <stdio.h>

struct Pessoa{
  char nome[40];
  int idade;
  double altura;
};

int cadastroPessoa(struct Pessoa pessoa[], int tam){

  // Lendo os dados do usuário:

  for(int c = 0; c < tam; c++){
    
    printf("\n- PESSOA %d:", c + 1);
    
    printf("\nInforme o nome: ");
    scanf("%s", &pessoa[c].nome);
    
    printf("Informe a idade: ");
    scanf("%d", &pessoa[c].idade);

    printf("Informe a altura: ");
    scanf("%lf", &pessoa[c].altura);
    system("clear");
    
  }

  // Exibindo as pessoas:

  printf("\n--- PESSOAS CADASTRADAS --- \n");

  for(int i = 0; i < tam; i++){
    printf("\nPessoa %d: \n", i + 1);
    printf("\nNome: %s", pessoa[i].nome);
    printf("\nIdade: %d anos", pessoa[i].idade);
    printf("\nAltura: %.2lf metros\n", pessoa[i].altura);
  }

  return 0;
}

int main(){
  
  struct Pessoa pessoa[3];
  int tam;

  printf("Informe o número de pessoas que deseja cadastrar: ");
  scanf("%d", &tam);
  cadastroPessoa(pessoa,tam);

  return 0;
  
}
