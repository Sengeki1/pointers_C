#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {-5, 115, 243, 121, 31, 1211, 114, 12, 252, 1172};
    int *p = &a[1], *q = &a[5];
    printf("O valor de *(p + 3) = %d\n", *(p+3));
    printf("O valor de *(p - 3) = %d\n", *(q-3));
    printf("O valor de (q - p) = %d\n", (q-p));
    printf("O endereco %d < %d\n", p, q);
    printf("O valor %d < %d\n", *p, *q);
}
