#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {

    // Inicializa o ambiente MPI (não precisamos dos argumentos de linha de comando
    // nesse exemplo simples:
    MPI_Init(NULL, NULL);

    // Obtém o número de processos:
    int nprocs = 0;
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);

    // Obtém o rank do processo atual:
    int procid = 0;
    MPI_Comm_rank(MPI_COMM_WORLD, &procid);

    // Obtém o nome do processador atual:
    int tamanho_max_nome = MPI_MAX_PROCESSOR_NAME;
    char nome_do_processo[tamanho_max_nome];
    MPI_Get_processor_name(nome_do_processo, &tamanho_max_nome);

    // Imprime um "Olá, mundo!":
    printf("Olá, mundo! Eu sou o processador %2d em %s, de um total de %2d processadores.\n",
           procid, nome_do_processo, nprocs);

    // Finaliza o ambiente MPI:
    MPI_Finalize();

    // Retorna
    return 0;
}
