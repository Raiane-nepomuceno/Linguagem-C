#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char nome[5][30],c;
	int resultado,i;
	
	printf("Digite o caractere:");
	scanf("%c",&c);
	
	for(i=0;i<5;i++)
	{
		printf("Digite o nome:");
		scanf("%s",&nome[i]);
	}

	//resultado = strchr(str,c);
	for(i=0;i<5;i++)
	{
		if(strchr(nome[i],c)!=NULL)
		{
			printf("%d - %s\n",i+1,nome[i]);
		}
	}
	system("Pause");
}
