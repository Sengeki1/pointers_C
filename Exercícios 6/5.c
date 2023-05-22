#include <stdio.h>
#include <stdlib.h>
#define N 2

typedef struct no{
    int valor;
    struct no* prox;
}no;
void Inserir(no**, int n);
int contar_ocorrencias(no*, int);
int main(){
    no* head = NULL;
    int a;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        Inserir(&head, a);
    }
    int contar = contar_ocorrencias(head, N);
    printf("O numero %d tem %d ocorrencias.\n", N, contar);
}
void Inserir(no** pLista, int n){
    no* p = (no*)malloc(sizeof(no));
    p->valor = n;
    p->prox = *pLista;
    *pLista = p;
}
int contar_ocorrencias(no* pLista, int n){
    int contador = 0;
    no* p = pLista;
    while(p != NULL) {
        if(p->valor == n){
            contador += 1;
        }
        p = p->prox;
    }
    return contador;
}