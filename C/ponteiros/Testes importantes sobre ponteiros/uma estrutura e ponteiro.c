#include<stdio.h>
#include<stdlib.h>
struct Passagem{
    char nome[100];
    int idade;
};
void cadastro(struct Passagem *ponteiro)
{
    printf("Nome:");
    gets(ponteiro->nome);
    fflush(stdin);
    printf("Idade:");
    scanf("%d",ponteiro->idade);
}
void exibir(struct Passagem *ponteiro)
{
    printf("Nome:%s",(*(ponteiro)).nome);
    printf("Idade:%d",(*(ponteiro)).idade);

}
main()
{
    struct Passagem P1,*p;
    p = &P1;
    cadastro(p);
    exibir(p);
}
