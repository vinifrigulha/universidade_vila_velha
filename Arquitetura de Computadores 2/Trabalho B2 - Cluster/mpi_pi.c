#include <mpi.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    int rank, size, n = 1000000, i;
    double h, sum = 0.0, pi, x;

    // Initialize the MPI environment
    MPI_Init(&argc, &argv);

    // Get the rank of the process
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Get the number of processes
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Calculate the width of each rectangle
    h = 1.0 / (double) n;
    
    // Each process calculates a part of the sum
    for (i = rank; i < n; i += size) {
        x = h * ((double)i + 0.5);
        sum += 4.0 / (1.0 + x * x);
    }

    // Multiply by the width of the rectangles
    sum = h * sum;

    // Reduce all of the local sums into the global sum
    MPI_Reduce(&sum, &pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

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
    printf("Valor aproximado de Pi: %.16f\n", pi);

    // Finalize the MPI environment
    MPI_Finalize();

    return 0;
}
