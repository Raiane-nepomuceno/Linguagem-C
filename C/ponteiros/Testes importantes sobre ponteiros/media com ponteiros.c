#include<stdio.h>
#include<stdlib.h>

void cria_vetor( int n,float *ponteiro)
{
    int i;
    for(i = 0; i<n;i++)
    {
        printf("Digite a nota %d:",i+1);
        scanf("%f",&ponteiro[i]);
    }
}
float, media( int x,float *ponteiro)
{
    int i;
    float soma = 0;
    for(i = 0; i < x;i++)
    {
        soma = soma + *(ponteiro + i);
    }
    soma = soma/x;
    return soma;
}
main()
{
    int i,notas;
    float res;

    printf("Digite a quantidade de notas:");
    scanf("%d",&notas);

    float vet[notas];
    float *ponteiro = vet;

    cria_vetor(notas,ponteiro);
    res = media(notas,ponteiro);

    printf("A media e: %.2f",res);
}
