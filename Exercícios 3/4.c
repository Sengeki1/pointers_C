#include <stdlib.h>
#include <stdio.h>
int* func();
int main(){
    int A[] = {1,2,3,4};
    int* n = func(A);
    int size = sizeof(A) / sizeof(&A);
    for(int i = 0; i < size; i++){
        printf("%d ", *(n+i));
    }
    free(n);
}
int* func(int* A){
    int *p;
    p = (int*)malloc(sizeof(int));
    p = A;
    return p;
}