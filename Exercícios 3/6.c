#include <stdio.h>
#include <stdlib.h>

char* clonar(char *s);
int main (){
    char* string = "computer";
    char* copy = clonar(string);
    free(copy);
}
char* clonar(char *s1){
    char* s2 = (char*)malloc(sizeof(char));
    printf("String = %s\n", s1);
    int i;
    for(i = 0; s1[i] != '\0'; i++){
        s2[i] = s1[i];
    }
    s2[i] = '\0'; // i represents the index of the last character
    printf("Copy of String = %s\n", s2);
    return s2;
}