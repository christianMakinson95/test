#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("entero: %d",sizeof(int));
	printf("\n");
	printf("real: %d",sizeof(float));
	printf("\n");
	printf("long: %d",sizeof(long));
	printf("\n");
	printf("double: %d",sizeof(double));
	printf("\n");
	printf("short entero: %d",sizeof(short int));
	printf("\n");
	printf("caracter: %d",sizeof(char));
	printf("\n");
	printf("long double: %d",sizeof(long double));

	return 0;
}