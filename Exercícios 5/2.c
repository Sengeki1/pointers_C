#include <stdio.h>
#include <stdlib.h>
#define N 3

int* func(int*, int*);
int main(){
    int A[N] = {1,2,3};
    int B[N] = {4,5,6};
    printf("O array A tem os elementos: ");
    for(int i = 0; i < N; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("O array B tem os elementos: ");
    for(int i = 0; i < N; i++){
        printf("%d ", B[i]);
    }
    printf("\n");
    int* f = func(A, B);
    free(f);
}
int* func(int* A, int* B){
    int C[N];
    int* p = (int*)malloc(sizeof(int));
    p = C;
    printf("O array C tem os elementos: A * B\n");
    for(int i = 0; i < N; i++){
        p[i] = A[i] * B[i];
        printf("%d * %d = %d\n", *(A+i), *(B+i), *(p+i));
    }
    return p;
}