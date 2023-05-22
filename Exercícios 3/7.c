#include <stdio.h>
#include <stdlib.h>
int* criar_Array(int n, int valorInicial);
int main(){
    int* ptr = criar_Array(6, 3);
    free(ptr);
}
int* criar_Array(int n, int valorInicial){
    int A[n], i;
    int* p = (int*)malloc(n * sizeof(int));
    p = A;
    for(i = valorInicial; i <= n; i++){
        p[i] = i;
    }
    for(int i = valorInicial; i <= n; i++){
        printf("%d ", *(p+i));
    }
    return p;
}