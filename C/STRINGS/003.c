#include<stdio.h>
#include<string.h>
#include <stdlib.h>
main()
{
	char palavra[10],b[10];
	int resultado;
	puts("Digite a palavra:");
	gets(palavra);
	strcpy(b,palavra);
	strrev(b);
	resultado = strcmp(b,palavra);
	if (resultado==0)
	{
		printf("  E palindromo");
	}
	else{
	
		printf(" nao e palindromo");
	}
	system("pause");
}
