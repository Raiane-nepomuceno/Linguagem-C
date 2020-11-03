#include<stdio.h>
#include<stdlib.h>
struct Dados{
    char nome[100];
    //int idade;
};
void cadastro(struct Dados *ponteiro)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Nome:");
        scanf("%s",&ponteiro[i].nome);
        //printf("Idade:");
        //scanf("%d",ponteiro[i].idade);

    }
}
void mostrar(struct Dados *ponteiro,int tam)
{
    //
    int i,j;
    for(i=0;i<tam;i++)
    {
        printf("Nome: %s\n",ponteiro[i].nome);
        //printf("Idade: %d\n",(*(ponteiro + i)).idade);
    }

}
int excluir(struct Dados *ponteiro)
{
    int i,j,pos = -1;
    char nome[100];
    printf("Digite o nome a ser excluido:");
    scanf("%s",&nome);

    for(i=0;i<3 && pos<0;i++)
    {
        if(strcmp(ponteiro[i].nome,nome)== 0)
        {
            pos = i;
        }
    }
    for(j=pos;j<3 && pos>=0;j++)
    {
        ponteiro[j].nome = ponteiro[j+1].nome;
    }

    return 2;
}
/*
void alterar(struct Dados *ponteiro)
{
    char nome[100],novo_nome[100];
    int i;
    puts("Digite o nome completo:");
    gets(nome);
    for(i=0;i<3;i++)
    {
        if( strcmp((*(ponteiro + i)).nome,nome) == 0)
        {
            printf("Nome encontrado");
            puts("Nome:");
            gets(novo_nome);
            *(ponteiro + i).nome = novo_nome;
        }
    }
}*/
main()
{
    struct Dados vet[3];//*ponteiro;
    //ponteiro = &vet;
    int tam;

    cadastro(vet);

    tam = excluir(vet);
    //alterar(ponteiro);

    mostrar(vet,tam);

}
