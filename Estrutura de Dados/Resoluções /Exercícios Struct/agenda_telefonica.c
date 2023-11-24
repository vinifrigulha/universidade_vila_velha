//Desenvolva um programa que simule uma agenda de contatos. Use uma struct para representar as informações de cada contato, incluindo nome, telefone e email. Utilize alocação dinâmica de memória para gerenciar um array de contatos. O programa deve permitir adicionar, exibir e buscar contatos na agenda.

#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM_CONTATO 3

struct Agenda{
  char nome[30];
  char telefone[20];
  char email[50];
};

int adicionarContato(struct Agenda contato[], int tam, int *cadastros){

  printf("\nInsira as informações do contato: \n");

  for(int c = 0; c < tam; c++){
    
    printf("\nNome: ");
    scanf("%s", &contato[c].nome);

    printf("Telefone: ");
    scanf("%s", &contato[c].telefone);

    printf("Email: \n");
    scanf("%s", &contato[c].email);
  }
  
  (*cadastros)++;

  return 0;
}

int exibirListaContatos(struct Agenda contato[], int tam){

  printf("\n\n---- LISTA DE CONTATOS ----\n\n");

  for(int c = 0; c < tam; c++){
    
    printf("Contato %d: \n", c+1);

    printf("\nNome: %s: ", contato[c].nome);
    printf("Telefone %s: ", contato[c].telefone);
    printf("email %s: ", contato[c].email);
  }
  return 0;
}

int buscarContato(struct Agenda contato[], int tam, char busca[]){

  for(int c = 0; c < tam; c++){

    if(strcasecmp(contato[c].nome,busca) == 0){
      
      printf("\nPessoa %d: ", c + 1);

      printf("\nNome: %s", contato[c].nome);
      printf("\nTelefone: %s", contato[c].telefone);
      printf("\nEmail: %s",contato[c].email);
      
    }
    else{
      printf("\nPessoa não encontrada.");
    }
  }

  return 0;
}

int menu(struct Agenda contato[], int *tam, int *cadastros,char busca[]){

  cadastros = 0;
  int op = 0;

  printf("\n---- AGENDA ----\n\n");
  
  printf("O que você deseja fazer?\n");
  
  printf("\n[1] Adicionar novo contato");
  printf("\n[2] Exibir Lista de Contatos");
  printf("\n[3] Buscar contato\n");
  
  printf("\n[9] Sair\n");
  printf("\nR: ");
  scanf("%d", &op);

  if(op == 1){

    printf("\nQuantos contatos você deseja adicionar? \n");
    printf("\nR: ");
    scanf("%d", tam);

    contato = (struct Agenda*) malloc((*tam) * sizeof(struct Agenda));

    if(contato == NULL){
      printf("Erro na alocação de memória.");
    }
    adicionarContato(contato, *tam, cadastros);
  }
  else if(op == 2){
    if (*cadastros > 1){
      exibirListaContatos(contato, *tam);
    }
    else{
      printf("\nA lista está vazia.");
    }
  }
  else if(op == 3){
    buscarContato(contato,*tam,busca);
  }
  else if (op == 9){

    free(contato);
    
    printf("\nFim do programa!");
    return 1;
  }
  else{
    printf("\n\nOpção inválida. Favor inserir algum valor do menu.");
  }

  return 0;
}

int main(){
  
  struct Agenda contato[MAX_TAM_CONTATO];
  int cadastrados = 0;
  int tam;
  char busca;

  while(1){
    if (menu(contato,&tam,&cadastrados,&busca) == 1){
      break;
    }
  }
  return 0;
}
