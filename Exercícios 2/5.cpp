#include <stdio.h>
#include <stdlib.h>
#define N 10
int main ()
{
	int A[N] = {1,2,3,4,5,6,7,8,9,10};
	int *p = &A[0], *q = &A[N-1], temp;
	
	while(p > q) 
	{
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	for(int i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
}
