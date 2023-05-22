#include <stdlib.h>
#include <stdio.h>
typedef struct ponto {int x, y;} ponto_t;
typedef struct rectangulo {
    ponto_t superiorEsquerdo;
    ponto_t inferiorDireito;
} rectangulo_t;
int main(){
    rectangulo_t *p = (rectangulo_t*)malloc(sizeof(rectangulo_t));
    p->superiorEsquerdo.x = 10;
    p->superiorEsquerdo.y = 25;
    p->inferiorDireito.x = 20;
    p->inferiorDireito.y = 15;
    printf("O ponto do canto superior esquerdo: (%d, %d)\n", p->superiorEsquerdo.x, p->superiorEsquerdo.y);
    printf("O ponto do canto superior esquerdo: (%d, %d)\n", p->inferiorDireito.x, p->inferiorDireito.y);

}