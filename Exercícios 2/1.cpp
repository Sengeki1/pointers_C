#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numeros[10] = {0.0, 1.1, 2.2, 9.9};
	float *nPtr;
	for(int i = 0; i < 4; i++)
	{
		printf("%.1f ", numeros[i]); 
	}
	printf("\n");
	
	nPtr = numeros;
	nPtr = &numeros[0];
	
	for(int i = 0; i < 4; i++)
	{
		printf("%.1f ", *(nPtr+i));
	}
	printf("\n");
	for(int i = 0; i < 4; i++)
	{
		printf("%.1f ", *(numeros+i));
	}
	printf("\n");
	
	printf("%.1f \n", (numeros[3]));
	printf("%.1f \n", *(nPtr+3));
	printf("\n");
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d \n", (nPtr+i));
	}
	printf("\n");
	printf("O endereco referenciado por nPtr+8 e %d\n", (nPtr+8));
	printf("\n");
	
	for(int i = 0; i < 5; i++)
	{
		printf("Address = %d \n", (nPtr -= 4));
	}
}
