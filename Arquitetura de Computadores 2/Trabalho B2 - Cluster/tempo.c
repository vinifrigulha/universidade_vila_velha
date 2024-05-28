#include <mpi.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define PI_REF 3.14159265358979323846  // Valor de referência de π

int main(int argc, char** argv) {
    int rank, size, n = 1000000, i;
    double h, sum = 0.0, pi, start_time, end_time;

    // Inicializa o ambiente MPI
    MPI_Init(&argc, &argv);
    
    // Obtém o rank do processo
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
    // Obtém o número total de processos
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    // Obtém o nome do nó
    char hostname[256];
    gethostname(hostname, 256);
    
    // Marca o tempo de início
    start_time = MPI_Wtime();
    
    // Calcula a largura de cada retângulo
    h = 1.0 / (double) n;
    
    // Cada processo calcula uma parte da soma
    for (i = rank; i < n; i += size) {
        x = h * ((double)i + 0.5);
        sum += 4.0 / (1.0 + x * x);
        
        // Mensagem de debug a cada 100.000 iterações
        if ((i - rank) % 100000 == 0) {
            printf("Processador %2d em %s está calculando o intervalo %d\n", rank, hostname, i);
        }
    }
    
    // Multiplica pela largura dos retângulos
    sum = h * sum;
    
    // Reduz todas as somas locais em uma soma global
    MPI_Reduce(&sum, &pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
    
    // Marca o tempo de término
    end_time = MPI_Wtime();
    
    // O processo raiz imprime o valor aproximado de π, o tempo de execução e a margem de erro
    if (rank == 0) {
        double error = fabs(pi - PI_REF);
        double execution_time = end_time - start_time;
        printf("Valor aproximado de Pi: %f\n", pi);
        printf("Tempo de execução: %f segundos\n", execution_time);
        printf("Margem de erro: %f\n", error);
    }

    // Cada processo imprime sua mensagem de saudação
    printf("Olá, mundo! Eu sou o processador %2d em %s, de um total de %d processadores.\n", rank, hostname, size);
    
    // Finaliza o ambiente MPI
    MPI_Finalize();
    
    return 0;
}
