#include <stdio.h>
#include <stdlib.h>

int* func(int n);
int main(){
    int n = 4;
    int* f = func(n);
    free(f);
}
int* func(int n){
    int A[n];
    int* p = (int*)malloc(sizeof(int));
    p = A;
    if (n <= 0){
        printf("O array tem tamanho %d", n);
        return NULL;
    } else {
        for(int i = 0; i < n; i++){
            printf("Array tem %d espacos alocados.\n", p+i);
        }
        return p;
    }
}