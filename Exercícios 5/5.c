#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char codigo[6];
    char nome[25];
    int ano;
    struct node* proximo;
}Node;
void add(char* codigo, char* nome, int ano, Node** pLista);
void listar(Node** pLista);
void remover(char* codigo, Node** pLista);
int procurar(char *, Node** pLista);
int main(){
    Node* head = NULL;
    char codigo[6];
    char nome[25];
    int ano;
    int i;
    printf("Digite os dados do Curso, -1 para terminar!\n");
    do{
        printf("Digite o codigo do curso: ");
        scanf("%s", &codigo);
        if (strcmp(codigo, "-1") == 0) break;
        printf("Digite o nome do curso: ");
        scanf("%s", &nome);
        if (strcmp(nome, "-1") == 0) break;
        printf("Digite o ano do curso: ");
        scanf("%d", &ano);
        if (ano == -1 ) break;
        add(codigo, nome, ano, &head);
        printf("Queres continuar ? Digite 1 se queres continuar, -1 para terminar\n");
        scanf("%d", &i);
        if (i == -1) break;
        else 1;
    } while(1);
    listar(&head);
    char cd[6];
    printf("Digite o codigo do curso para elimnar o curso pretendido: ");
    scanf("%s", cd);
    remover(cd, &head);
    listar(&head);
    char dc[6];
    printf("Procurar o curso, digite o codigo do curso: ");
    scanf("%s", dc);
    procurar(dc, &head);
}
void add(char* codigo, char* nome, int ano, Node** pLista){
    Node* p = (Node*)malloc(sizeof(Node));
    strcpy(p->codigo, codigo);
    strcpy(p->nome, nome);
    p->ano = ano;
    p->proximo = *pLista;
    *pLista = p;
}
void listar(Node** pLista){
    Node* p = *pLista;
    while(p != NULL){
        printf("Codigo do curso: %s, nome do curso: %s, ano: %d\n", p->codigo, p->nome, p->ano);
        p = p->proximo;
    }
    printf("\n");
}
void remover(char* codigo, Node** pLista){
    Node* temp1 = *pLista;
    Node* temp2 = NULL; // novo Nó
    while(temp1 != NULL){
        if(strcmp(codigo, temp1->codigo) == 0) {
            if(temp2 == NULL){ // Se o Nó for o ultimo elemento da lista
                *pLista = temp1->proximo;
                free(temp1);
            } else {
                temp2->proximo = temp1->proximo;
                free(temp1);
            }
            return;
        } 
        temp2 = temp1;
        temp1 = temp1->proximo;
    } 
}

int procurar(char* codigo, Node** pLista){
    Node* p = *pLista;
    while(p != NULL){
        if(strcmp(p->codigo, codigo)== 0) {
            printf("O curso %s existe", p->nome);
            return 1; 
        }
        p = p->proximo;
    }
    printf("O curso nao existe");
    return 0;
}