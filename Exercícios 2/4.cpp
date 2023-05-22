#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = { 5, 15, 43, 54, 14, 2, 14, 2, 52, 72};
	int *p = a, *q = &a[5];
	printf("%d\n", *(p+3));
	printf("%d\n", *(q-3));
	printf("%d \n", (q-p)); //?
	printf("enderco p = %d < endereco q = %d\n", p, q);
	printf("valor p = %d > valor q = %d", *p, *q);	
}
