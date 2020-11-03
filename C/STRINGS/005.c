#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char nome[15],sobrenome[20];
	int tam;
	
	printf("Digite o nome:");
	scanf("%s",&nome);
	printf("Digite o sobrenome:");
	scanf("%s",&sobrenome);
	
	strcat(nome,sobrenome);
	
	printf("A nova string %s\n",nome);
	
	tam = strlen(nome);
	 
	printf("Ha %d caracteres\n",strlen(nome));
	
	printf("Primeiro caractere %c\n",nome[0]);
	printf("O ultimo caracatere:%c\n",nome[tam-1]);
	return 1;
}