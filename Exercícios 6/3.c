#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct UnidadeCurricular {
    char sigla[6];
    char nomeUC[50];
    int ano;
    int semestre;
    struct UnidadeCurricular *proximo;
} uni;
uni* head;
int Inserir(char* sigla, char* nomeUC, int ano, int semestre);
int procurar(char*);
void remover(char*);
int main(){
    head = NULL;
    char sigla[6], nomeUC[50];
    int ano, semestre;
    int i;
    // O curso existe
    char sigla1[6] = "a", nomeU1[50] = "engenharia";
    int ano1 = 1, semestre2 = 1;
    Inserir(sigla1, nomeU1, ano, semestre);
    //
    printf("Digite os dados da Unidade Curricular, -1 para terminar!\n");
    do{
        printf("Digite a sigla da Unidade Curricular: ");
        scanf("%s", sigla);
        if (strcmp(sigla, "-1") == 0) break;
        printf("Digite o nome da Unidade Curricular: ");
        scanf("%s", nomeUC);
        if (strcmp(nomeUC, "-1") == 0) break;
        printf("Ano da Unidade Curricular: ");
        scanf("%d", &ano);
        if (ano == -1 ) break;
        printf("Qual semestre da Unidade Curricular: ");
        scanf("%d", &semestre);
        if (ano == -1 ) break;
        Inserir(sigla, nomeUC, ano, semestre);
        printf("Queres continuar ? Digite 1 se queres continuar, -1 para terminar\n");
        scanf("%d", &i);
        if (i == -1) break;
        else 1;
    } while(1);
    char cd[10];
    printf("Procurar a Unidade Curricular: ");
    scanf("%s", cd);
    procurar(cd);
    char ab[10];
    printf("Qual Unidade Curricular pretende remover?: ");
    scanf("%s", ab);
    remover(ab);
}
int Inserir(char* sigla, char* nomeUC, int ano, int semestre){
    if(head != NULL){
        int resultadoProcurar = procurar(nomeUC);
        if(resultadoProcurar == 1) {
            printf("Nao e possivel criar Unidade Curricular com nome %s\n", nomeUC);
            printf("\"Tentativa de criar Unidade Curricular falhou, ja ha uma com este nome\n");
            return -1;
        }
    }
    uni* p =(uni*)malloc(sizeof(uni));
    strcpy(p->sigla, sigla);
    strcpy(p->nomeUC, nomeUC);
    p->ano = ano;
    p->semestre = semestre;
    p->proximo = head;
    head = p;
}
int procurar(char* nome){
    uni* p = head;
    while(p != NULL){
        if(strcmp(p->nomeUC, nome) == 0) {
            printf("O curso existe\n");
            return 1;
        }
        p = p->proximo;
    }
    printf("O curso nao existe\n");
    return 0;
}

void remover(char* nome) {
    uni* noCorrente = NULL;
    uni* noAnterior = NULL;
    noCorrente = head;
    while(noCorrente != NULL) {
        if((strcmp(noCorrente->nomeUC, nome)) == 0) 
            break;
        else {
            noAnterior = noCorrente;
            noCorrente = noCorrente->proximo;
        }
    }
    if(noAnterior == NULL)
        head = head->proximo;
    else
        noAnterior->proximo = noCorrente->proximo;
    
    free(noCorrente);
    free(noAnterior);
}