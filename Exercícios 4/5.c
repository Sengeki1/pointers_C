#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int valor;
    struct no* proximo;
}no_;
no_* head;
void Inserir(int n);
no_* find_last(no_* pLista, int n);
void Print();
int main(){
    head = NULL;
    for(int i = 0; i <= 5; i++)
        Inserir(i);
    Print();
    find_last(head, 3);
}
void Inserir(int n){
    no_* p = (no_*)malloc(sizeof(no_));
    p->valor = n;
    p->proximo = head;
    head = p;
}
void Print(){
    no_* p = head;
    while(p != NULL){
        printf("%d ", p->valor);
        p = p->proximo;
    }
    printf("\n");
}
no_* find_last(no_* pLista, int n){
    no_* p = pLista;
    no_* lastNode = NULL;
    while(p != NULL){
        if(n == p->valor){
            printf("No %d retornado com successo!\n", n);
            lastNode = p;
        }
        p = p->proximo;
    }
    if(lastNode == NULL){
        printf("No %d nao encontrado!\n");
        return NULL;
    }
    return lastNode;
}