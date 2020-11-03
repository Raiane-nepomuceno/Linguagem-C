#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void excluir(char *ponteiro,char letra,int tam)
{
    int i,j,cont=0;
    for(i=0;i<tam; i++)
    {
        //printf("%c\n",*(ponteiro + i));
        if(ponteiro[i] == letra && cont == 0)
        {
            cont++;
            for(j=i;j<tam-1;j++)
            {
                ponteiro[j] = ponteiro[j+1];
            }
            ponteiro[tam-1] = '\0';
        }

    }


}

main()
{
    char str[100],letra;
    int tam;

	printf("Digite a string:");
	gets(str);

	printf("Digite o caractere:");
	scanf("%c",&letra);


    tam = strlen(str);

    excluir(str,letra,tam);

    puts(str);

    system("pause");
}
