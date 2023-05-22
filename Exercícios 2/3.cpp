#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[5] = {2,4,6,8,10};
	int* vPtr;
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	vPtr = A;
	vPtr = &A[0];
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", *(vPtr+i));
	}
	printf("\n");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", *(A+i));
	}
	printf("\n");
	printf("%d\n", A[3]);
	printf("%d\n", *(vPtr+3));
}
