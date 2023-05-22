#include <stdio.h>
#include <stdlib.h>
typedef struct Aluno{
    char nome[15];
    int pv1, pv2, pv3;
    int n_matricula;
}aluno_OS;
aluno_OS printAluno(aluno_OS self);
int main(){
    aluno_OS aluno1 = {"Marco", 15, 14, 16, 5320};
    aluno_OS aluno2 = {"Pedro", 9, 10, 8, 4354};
    aluno_OS aluno3 = {"Anabela C", 20, 20, 20, 1400};
    printf("Tamanho da estrutura: %d\n", sizeof(aluno1));
    printf("Tamanho da estrutura: %d\n", sizeof(aluno2));
    printf("Tamanho da estrutura: %d\n", sizeof(aluno3));
    printAluno(aluno2);
}
aluno_OS printAluno(aluno_OS self){
    printf("O nome do aluno: %s\n", self.nome);
    printf("Nota da primeira prova: %d\n", self.pv1);
    printf("Nota da segunda prova: %d\n", self.pv2);
    printf("Nota da terceira prova: %d\n", self.pv3);
    printf("Numero de estudante: %d\n", self.n_matricula);
}

