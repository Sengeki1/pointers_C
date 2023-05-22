#include <stdlib.h>
#include <stdio.h>
typedef struct no{
    int valor;
    struct no* proximo;
}no_;
no_* head;
int contar_ocorrencias(no_* pLista, int n);
void Inserir(int n);
int main(){
    head = NULL;
    Inserir(2);
    Inserir(3);
    Inserir(2);
    Inserir(3);
    Inserir(4);
    int cont = contar_ocorrencias(head,3);
    printf("Numero de ocorrencias: %d", cont);
}
void Inserir(int n){
    no_* p = (no_*)malloc(sizeof(no_));
    p->valor = n;
    p->proximo = head;
    head = p;
}
int contar_ocorrencias(no_* pLista, int n){
    int contador = 0;
    no_* p = pLista;
    while(p != NULL){
        if(n == p->valor){
            contador += 1;
        }
        p = p->proximo;
    }
    return contador;
}