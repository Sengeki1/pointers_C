#include <stdio.h>
#include <stdlib.h>

void store_zeros(int* valores, int n);
int main(){
    int A[5];
    store_zeros(A, 3);
}
void store_zeros(int* valores, int n){
    for(int i = 0; i < n; i++){
        valores[i] = 0;
        printf("Posicao [%d] = %d\n", i, valores[i]);
    }
}