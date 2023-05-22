#include <stdlib.h>
#include <stdio.h>

int main(){
    int size;
    printf("Quantos alunos tem na turma: ");
    scanf("%d", &size);
    char* array[size]; // Declare an array of strings
    printf("Digite os nomes: \n");
    for(int i = 0; i < size; i++){
        array[i] = (char*)malloc(sizeof(char)); // Alocate each input of the array 
        scanf("%s", array[i]);
    }
    for(int j = 0; j < size; j++){
        printf("Aluno[%d]: %s\n", j, array[j]);
    }
    for(int k = 0; k < size; k++){
        free(array[k]); 
    }
}