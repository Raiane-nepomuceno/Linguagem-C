#include<stdio.h>
#include<stdlib.h>

float media(int n,float *ponteiro)
{
    int i;
    float soma;
    for(i=0;i<n;i++)
    {
        soma = soma + *(ponteiro + i);
    }
    soma = soma/n;
    return soma;
}






main()
{
    int i = 0 ;
    float vet[50],medias = 0;
    int op = 1;
    float *ponteiro = vet;

    while(op!=0)
    {
        printf("Nota %d:",i+1);
        scanf("%f",&vet[i]);
        i++;
        printf("1-continua, 0 - para:");
        scanf("%d",&op);
    }
    medias = media(i,ponteiro);
    printf("%f",medias);
    system("pause");
}
