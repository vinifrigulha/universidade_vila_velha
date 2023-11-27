//Este arquivo é para entender como funcionam os algoritmos de inserção e remoção em uma estrutura de lista simplesmente encadeada.

#include <string.h>
#include <stdlib.h>

typedef struct no{
  int valor;
  struct no *proximo;
}No;

//Inserindo um elemento no início
void inserir_no_inicio(No **lista, int num){
  No *novo = malloc(sizeof(No));

  if(novo){
    novo->valor = num;
    novo->proximo = *lista;
    *lista = novo;
  }
  else{
    printf("Erro ao alocar memória!\n");
  }
}


//Inserindo um elemento no fim
void inserir_no_fim(No **lista, int num){
  
  No *aux, *novo = malloc(sizeof(No));

  if(novo){

    // Podemos inserir no final de uma lista quando o final da lista apontar para um valor NULL

    novo->valor = num;
    novo->proximo = NULL;

    //Mas e se a lista estiver vazia?
    if(*lista == NULL){
      *lista = novo;
    }
    else{
      aux = *lista;
      while(aux->proximo){
        aux = aux->proximo;
      }
      aux->proximo = novo;
    }
  }
  else{
    printf("Erro ao alocar memória!\n");
  }
}

// inserindo um elemento no meio da lista
void inserir_no_meio(No **lista, int num, int anterior){

  No *aux, *novo = malloc(sizeof(No));

  if(novo){
    novo->valor = num;
    
    // a lista está vazia?
    if(*lista == NULL){
      *lista = novo;
    }
    else{
      // apontamos para o início da lista
      aux = *lista;

      while(aux->valor != anterior && aux->proximo){
        aux = aux->proximo;
      }
      novo->proximo = aux->proximo;
      aux->proximo = novo;
    }

    
  }
  else{
    printf("Erro ao alocar memória!\n");
  }
  
}

//Imprimindo a lista simplesmente encadeada
void imprimir(No *no){

  printf("\n---- LISTA ----\n");

  while(no){
    printf("\n%d ", no->valor);
    no = no->proximo;
  }
  printf("\n\n----------------\n");
}

int main(){

  No *lista = NULL;
  int op;
  int ant;
  int num;

  printf("----- MENU ------\n");

  do{
      printf("\nO que você deseja fazer? \n");
      printf("\n[1] Inserir elemento no início");
      printf("\n[2] Inserir elemento no meio");
      printf("\n[3] Inserir elemento no final");
      printf("\n[4] Imprimir lista\n\n");
  
      printf("\n[9] Sair");
      printf("\nR: ");
      scanf("%d", &op);
    
      if (op == 1){

        printf("\nInforme o valor que você deseja inserir: \n");
        scanf("%d", &num);
        inserir_no_inicio(&lista, num);
        system("clear");
      }
      else if (op == 2){
        printf("\nInforme o valor que você deseja inserir: \n");
        scanf("%d", &num);

        printf("\nAgora informe após qual valor você deseja inserir: \n");
        scanf("%d", &ant);
        inserir_no_meio(&lista, num, ant);
        system("clear");
      }
      else if(op == 3){

        printf("\nInforme o valor que você deseja inserir: \n");
        scanf("%d", &num);
        inserir_no_fim(&lista, num);
        system("clear");
      }
      else if(op == 4){
        imprimir(lista);
      }
      else{
        printf("Opção inválida!");
      }
    }
  while(op != 9);
  

  return 0;

}
