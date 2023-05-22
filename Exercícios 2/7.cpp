#include <stdio.h>
#include <stdlib.h>
int sum_array(const int* A, int n)
{
	int i, sum;
	sum = 0;
	for(i = 0; i < n; i++)
		sum += *(A+i);
	return sum;
}
int main ()
{
	int A[] = {2,4};
	int size = 2;
	int result = sum_array(A, size);
	printf("Resultado: %d", result);
}
