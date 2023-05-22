#include <stdio.h>
#include <stdlib.h>

typedef struct pixel {
    int x, y;
}pixel_;
typedef struct rectangulo {
    pixel_ pontoCantoSE;
    pixel_ pontoCantoID;
}rectangulo_;
int main(){
    rectangulo_* ptr = (rectangulo_*)malloc(sizeof(rectangulo_));
    ptr->pontoCantoSE.x = 100;
    ptr->pontoCantoSE.y = 250;
    ptr->pontoCantoID.x = 200;
    ptr->pontoCantoID.y = 150;

    printf("Canto Superior Esquerdo: (%d, %d)\n", ptr->pontoCantoSE.x, ptr->pontoCantoSE.y);
    printf("Canto Inferior Direito: (%d, %d)\n", ptr->pontoCantoID.x, ptr->pontoCantoID.y);
}