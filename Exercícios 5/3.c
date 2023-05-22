#include <stdio.h>
#include <stdlib.h>
#define N 3

int* func(int A[N][N]);
int main(){
    int A[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    int* f = func(A);
    free(f);
}
int* func(int A[N][N]){
    int B[N];
    int* p = (int*)malloc(sizeof(int));
    p = B;
    for(int i = 0; i < N; i++){
        int contador = 0; // para cada iteração, contador reseta a cada linha/coluna
        for(int j = 0; j < N; j++){
            contador += A[i][j];
        }
        p[i] = contador;
    }
    for(int i = 0; i < N; i++){
            printf("Soma da coluna [%d]: %d ", i, *(p+i));
            printf("\n");
        }
    return p;
}