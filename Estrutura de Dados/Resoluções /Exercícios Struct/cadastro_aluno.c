//Crie um programa que permita cadastrar informações de alunos, como nome, idade e nota. Utilize uma struct para representar os dados de cada aluno e alocação dinâmica de memória para armazenar um array de alunos. O programa deve ser capaz de adicionar novos alunos, exibir os dados dos alunos cadastrados e liberar a memória alocada no final.

#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 4
#define NOTA_MIN_APROVACAO 7

struct Aluno{
  char nome[30];
  int idade;
  double notaB1;
  double notaB2;
};

int cadastrarAluno(struct Aluno aluno[], int tam, int *pCadastradas){
  
  //Cadastrando alunos
  for(int c = 0; c < tam;c++){
    
    printf("\nALUNO %d: \n", c + *pCadastradas);
    
    printf("\nNome: ");
    scanf("%s", &aluno[c].nome);
    
    printf("Idade: ");
    scanf("%d", &aluno[c].idade);
    
    printf("Nota B1: ");
    scanf("%lf", &aluno[c].notaB1);
    
    printf("Nota B2: ");
    scanf("%lf", &aluno[c].notaB2);
    
  }
  
  (*pCadastradas)++;
  
  return 0;
}

int mediaNotas(struct Aluno aluno[], int tam){

  printf("\n\n---------------------\n\n");
  printf("---- SITUAÇÃO ----\n");
  
  for(int i=0;i<tam;i++){

    int somaNotas = aluno[i].notaB1 + aluno[i].notaB2;
    double media = somaNotas/2.0;

    printf("\nNome: %s", aluno[i].nome);
    
    printf("\nMÉDIA: %.1lf", media);

    if (media > NOTA_MIN_APROVACAO){
      printf("\nSATUS: Aprovado.");
      printf("\n\n---------------------\n\n");
    }
    else{
      printf("\nSATUS: Reprovado.\n\n");
      printf("\n\n---------------------\n\n");
    }
  }
  
  return 0;
}

int exibirAlunos(struct Aluno aluno[], int tam){

  
  printf("\n--- ALUNOS CADASTRADOS ---\n");
  for(int i = 0; i < tam; i ++){

    printf("\nAluno %d: \n", i + 1);

    printf("\nNome: %s", aluno[i].nome);
    printf("\nIdade: %d", aluno[i].idade);
    printf("\nNota B1: %.1lf", aluno[i].notaB1);
    printf("\nNota B2: %.1lf\n", aluno[i].notaB2);
  }

  return 0;
}

int menu(struct Aluno aluno[], int *tam, int *pCadastrados){

  int op = 0;

  printf("\nO que você deseja fazer?\n");
  printf("\n[1] Cadastrar Aluno");
  printf("\n[2] Exibir Cadastros");
  printf("\n[9] Sair\n");
  printf("\nR: ");
  scanf("%d", &op);

  if(op == 1){

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", tam);

    //Alocação dinâmica de memória
    aluno = (struct ALuno*) malloc((*tam) * sizeof(struct Aluno));
    
    if(aluno == NULL){
      
      printf("Erro na alocação de memória.\n");
      exit(1);
    }
    
    cadastrarAluno(aluno, *tam, pCadastrados);
  }

  else if (op == 2){

    if (*pCadastrados < 1){
      printf("Nenhuma pessoa cadastrada.");
    }
    else{
      
      exibirAlunos(aluno,*tam);
      mediaNotas(aluno,*tam);
    }
  }
  else if(op == 9){
    
    //Libera memória alocada
    free(aluno);
    
    printf("Memória liberada!");
    printf("Fim do programa!");
    return 1;
  }
  
  return 0;
}

int main(){

  struct Aluno aluno[MAX_ALUNOS];
  int tam;
  int cadastrados = 0;

  while(1){
    if (menu(aluno,&tam,&cadastrados) == 1){
      break;
    }
  }
  
  return 0;
}
