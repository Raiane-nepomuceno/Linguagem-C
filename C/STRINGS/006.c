#include<stdio.h>
#include<stdlib.h>
#include <string.h>
main()
{
	char nome[35];
	puts("Digite o nome:");
	gets(nome);
	printf("Maiusculo:%s\n",strupr(nome));
	printf("Minusculo:%s\n",strlwr(nome));
}
