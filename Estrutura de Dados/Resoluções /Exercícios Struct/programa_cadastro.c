// Implemente um programa que permita cadastrar até 10 pessoas com nome, idade e altura. 
// Utilize um array de estruturas "Pessoa". 
// O programa deve ter um menu que permita ao usuário adicionar novas pessoas,
// exibir a lista de pessoas cadastradas, buscar uma pessoa pelo nome, 
// calcular a média de idade e altura, e sair do programa.

#include <stdio.h>

struct Pessoa{

  char nome[40];
  int idade;
  double altura;

};


int cadastrarPessoa(struct Pessoa pessoa[],int tam, int *pCadastradas){

  for(int c = 0; c < tam; c++){
    printf("\nPESSOA %d", c + 1);
    
    printf("\nNome: ");
    scanf("%s", &pessoa[c].nome);

    printf("Idade: ");
    scanf("%d", &pessoa[c].idade);

    printf("Altura: ");
    scanf("%lf", &pessoa[c].altura);
  }
  
  (*pCadastradas)++; //incrementa a quantidade de pessoas cadastradas
  
  return 0;
}

int exibirCadastros(struct Pessoa pessoa[], int tam){

  for(int i = 0; i < tam; i ++){

    printf("\n--- PESSOAS CADASTRADAS ---\n");
    printf("\nPessoa %d: ", i + 1);
    
    printf("\nNome: %s", pessoa[i].nome);
    printf("\nNome: %d", pessoa[i].idade);
    printf("\nNome: %.2lf\n", pessoa[i].altura);
  }

  return 0;
}

int buscarPessoa(struct Pessoa pessoa[], int tam, const char busca[]){

  // Realizando a busca do nome no sistema

  for(int x = 0; x < tam; x++){

    if(strcasecmp(pessoa[x].nome,busca) == 0){ //strcasecpm - verifica o nome buscado com os cadastrados
                                              // ignora maiúsculas e minúsculas
      printf("\nPessoa encontrada!!\n");
      
      printf("\nPessoa %d: ", x + 1);

      printf("\nNome: %s", pessoa[x].nome);
      printf("\nNome: %d", pessoa[x].idade);
      printf("\nNome: %.2lf", pessoa[x].altura);
    }
    else{
      printf("\nPessoa não encontrada.");
    }
  }

  return 0;
}

int calcularMediaIdade(struct Pessoa pessoa[], int tam){

    double somaIdades = 0;
    double mediaIdades = 0;

    for(int x = 0; x < tam; x++){
      somaIdades += pessoa[x].idade;
      mediaIdades = somaIdades/tam;
    }

  printf("\nMédia de Idades: %.2lf", mediaIdades);
  return 0;
    
}

int calcularMediaAltura(struct Pessoa pessoa[], int tam){

  double somalturas = 0;
  double mediaAlturas = 0;

  for(int y = 0; y < tam; y++){
    somalturas += pessoa[y].altura;
    mediaAlturas = somalturas/tam;
  }

  printf("\nMédia de Alturas: %.2lf", mediaAlturas);
  return 0;
}


int menu(struct Pessoa pessoa[], int *tam, int *pCadastradas){

  int opcao = 0;
  char busca[40];

  printf("\nO que você deseja fazer agora?\n");

  printf("\n[1] Cadastrar pessoa");
  printf("\n[2] Exibir cadastros");
  printf("\n[3] Buscar nome");
  printf("\n\n[9] Sair\n");
  printf("R: ");
  scanf("%d", &opcao);
  system("clear");

  if (opcao == 1) {
    
    printf("Informe quantas pessoas deseja cadastrar: ");
    scanf("%d", tam);
    cadastrarPessoa(pessoa, *tam, pCadastradas);
  } 
  else if (opcao == 2) {
    
      if (*pCadastradas > 0) {
        
        exibirCadastros(pessoa, *tam);
      } else {
        
        printf("Nenhum cadastro encontrado.");
      }
  } 
  else if (opcao == 3) {
    
    printf("Digite o nome: ");
    scanf("%s", busca);
    buscarPessoa(pessoa, *tam, busca);
    } 
  else if (opcao == 9) {
      printf("Fim do programa!");
      exit(0);
    }
  menu(pessoa, tam, pCadastradas);
  
  return 0;
}


int main(){

  int tam;
  int pCadastradas = 0;
  struct Pessoa pessoa[3];
  int opcao;
  char busca[40];
  
    
    printf("--- MENU - PROGRAMA DE CADASTRO ---\n");
    printf("\nBem vindo!");
    printf("\nO que você deseja fazer?\n");
    
    printf("\n[1] Cadastrar pessoa");
    printf("\n[2] Exibir cadastros");
    printf("\n[3] Buscar nome");
    printf("\n\n[9] Sair\n");
    printf("R: ");
    scanf("%d", &opcao);
    system("clear");
  
    if(opcao == 1){
      
      printf("Informe quantas pessoas deseja cadastrar: ");
      scanf("%d", &tam);
      cadastrarPessoa(pessoa,tam, &pCadastradas);
    }
    else if (opcao == 2){
      if (pCadastradas > 0){
        exibirCadastros(pessoa,tam);
      }
      else{
        printf("Nenhum cadastro encontrado.");
      }
    }
    else if(opcao == 3){
      printf("Digite o nome: ");
      scanf("%s", busca);
      buscarPessoa(pessoa,tam, busca);
    }
    else if (opcao == 9){
      printf("Fim do programa!");
      exit(0);
    }
    system("clear");
    menu(pessoa, &tam, &pCadastradas);
  
  return 0;
}
