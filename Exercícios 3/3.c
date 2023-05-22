#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, x;
    int A[15], *p;
    p = (int*)malloc(sizeof(int));
    p = A;
    printf("Quantos numeros pretende digitar? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        p[i] = x; 
    }
    for(int i = 0; i < n; i++){
        printf("%d ", *(p+i));
    }
    free(p);
}