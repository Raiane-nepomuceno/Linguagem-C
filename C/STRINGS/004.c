#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char nome[15];
	printf("Digite o nome:");
	scanf("%s",&nome);
	printf("Ha %d letras",strlen(nome));
}
