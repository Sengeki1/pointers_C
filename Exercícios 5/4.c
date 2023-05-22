#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    float valor;
    struct node* proximo;
}Node;
void inserir(float numero, Node** pLista);
void Print();
int main(){
    Node* head = NULL;
    inserir(3.1, &head);
    inserir(4.1, &head);
    inserir(2.1, &head);
    inserir(5.1, &head);
    Print(&head);
    free(head);
}
void inserir(float numero, Node** pLista){ // modifiquei a função
    Node* p = (Node*)malloc(sizeof(Node));
    p->valor = numero;
    p->proximo = *pLista;
    *pLista = p;
}

void Print(Node** head){
    Node* p = *head;
    while(p != NULL){
        printf("No[%d]: Valor = %1.f ", p->proximo, p->valor);
        printf("\n");
        p = p->proximo;
    }
}
