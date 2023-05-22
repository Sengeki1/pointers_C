#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct noGrau{
    char apelido[20];
    float grau;
    struct noGrau* proximo;
}grau_;
int main(){
    //Ponteiro para lista ligada, lista está vazia 
    grau_* head = NULL;
    //Criar novo nó
    grau_* novoPtr = (grau_*)malloc(sizeof(grau_));
    strcpy(novoPtr->apelido, "Jarbas");
    novoPtr->grau = 91.5;
    // Inserir novo nó na lista
    novoPtr->proximo = head;
    head = novoPtr;
    //Percorrer a lista
    while(head != NULL) {
        printf("Apelido: %s, grau: %1.f\n", head->apelido, head->grau);
        head = head->proximo;
    }
    printf("Done 1\n");
    //Remover elementos da lista
    grau_* atualPtr = head;
    while(head != NULL) {
        atualPtr = atualPtr->proximo;
        grau_* tempPtr = atualPtr->proximo;
        atualPtr->proximo = tempPtr->proximo;
        free(tempPtr);
    }
    printf("Done 2\n");
    //Percorrer a lista para ver se todos os elementos estão deletados
    while(head != NULL) {
        printf("Apelido: %s, grau: %1.f\n", head->apelido, head->grau);
        head = head->proximo;
    }
    printf("Done 3\n");
}