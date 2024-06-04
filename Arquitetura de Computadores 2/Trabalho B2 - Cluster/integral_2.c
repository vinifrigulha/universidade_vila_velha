#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <mpi.h>

int main(int argc, char *argv[]) {
    int n = 1000000;  // Número de intervalos, pode ser ajustado conforme necessário
    int myid, numprocs, i;
    double my_integral, integral, h, sum, x;
    double exact_value = 1.0 / 3.0;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);

    h = 1.0 / (double)n;
    sum = 0.0;
    for (i = myid + 1; i <= n; i += numprocs) {
        x = h * ((double)i - 0.5);
        sum += (x * x + x);  // Função integrada é x^2 + x
    }
    my_integral = h * sum;

    MPI_Reduce(&my_integral, &integral, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
    if (myid == 0) {
        printf("Integral calculada: %.16f, Valor exato: %.16f, Margem de erro: %.16f\n", integral, exact_value, fabs(integral - exact_value));
    }

    MPI_Finalize();
    return 0;
}