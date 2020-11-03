#include<stdio.h>
#include<string.h>
main()
{
	char nome[25],tam[3];
	
	puts("Digite o nome:");
	gets(nome);
	
	strncpy(tam,nome,4);
	
	printf("%s",tam);
	
}
