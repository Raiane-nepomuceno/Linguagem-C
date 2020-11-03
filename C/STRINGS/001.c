#include<stdio.h>
#include<string.h>
int main()
{
	char vetor[3][10],aux[3];
	int i=0,j=0;
	for(i=0;i<3;i++)
	{
		printf("Digite o nome:");
		scanf("%s",&vetor[i]);
	}
	//ordenar o vetor
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			//se o vetor[i]>vetor[j] retorna > 0
			//exemplo:5>1?SIM!
		   if(strcmp(vetor[j],vetor[i])==-1)
		   {
		   		//aux = vetor[i]
		   		//aux = 5
				strcpy(aux,vetor[i]);
				//vetor[i]=vetor[j]
				//vetor[i]=1
				strcpy(vetor[i],vetor[j]);
				//vetor[j]=aux
				//vetor[j]=5
				strcpy(vetor[j],aux);
					   	
		   }	
		}
	
	}
	for(i=0;i<3;i++)
	{
		printf("%s",vetor[i]);
	
	}
	return 1;
}