#include <stdio.h>
#include <stdlib.h>
int str_eq(const char *s1, const char *s2)
{
	while(( s1 != '\0') && ( s2 != '\0')){
		if(*s1 == *s2) {
			return 1;
		} else{
			return 0;
		}
	}
}
int main ()
{
	char A[35], B[35];
	printf(" **Comparar duas strings** \n");
	printf("Digite a primeira String: ");
	scanf("%s", &A);
	printf("Digite a segunda String: ");
	scanf("%s", &B);
	int result = str_eq(A, B);
	
	if(result == 1){
		printf("Sao iguais!");
	} else {
		printf("Nao sao iguais!");
	}
}
