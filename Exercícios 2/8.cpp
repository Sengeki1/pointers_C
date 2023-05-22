#include <stdio.h>
#include <stdlib.h>
int search(const int* A, int n, int* k)
{
	int i, contador;
	for(i = 0; i < 5; i++){
		if(*(A+i) == *k){
			contador = 1;
		}
	}
	return contador;
}

int main()
{
	int A[] = {1,2,3,5,6}, look;
	int* p = (int*)malloc(sizeof(int));
	p = A;
	printf(" **Procurar o valor dentro da Array** \n");
	printf("{1 2 3 5 6}\n");
	scanf("%d", &look);
	int result = search(p, 5, &look);
	if (result == 1){
		printf("Match!\n");
	} else {
		printf("UnMatch!\n");
	}
	
}
