#include<stdio.h>
#include<string.h>
#define tam 2
struct Livros{
	int isbn;
	char titulo[20];
	char genero[20];
	char autores[2];
	int numerodepaginas;
};
void cadastro()
{
    int quant;
    printf("Digite a quantidade de livros a serem cadastrados:");
    scanf("%d",&quant);
    struct Livros vetor2[quant];
    double vet_copia[tam];
    int i,j;
    for(i=0;i<quant;i++)
    {
        printf("Digite o IBSN:");
        scanf("%d",&vetor2[i].isbn);
        fflush(stdin);

        printf("Digite o titulo:");
        scanf("%s",&vetor2[i].titulo);
        fflush(stdin);

        printf("Digite o genero:");
        scanf("%s",&vetor2[i].genero);
        fflush(stdin);
        //vetor de paginas
        for (j=0;j<2;j++)
        {
            printf("Digite o nome dos autores:");
            scanf("%s",&vet_copia[j]);
            fflush(stdin);
        }
        for(j=0;j<2;j++)
        {
            scanf(&vetor2[j].autores = vet_copia[j];
        }


        //Exibindo os valores
        //printf("IBSN:%d\n",vetor2[i].isbn);
        //printf("Titulo:%s\n",vetor2[i].titulo);
        //printf("Genero:%s\n",vetor2[i].genero);
        //printf("Paginas:%d\n",vetor2[i].numerodepaginas);

    }
}
int listar_um(quant)
{
    struct Livros vetor2[quant];
    int i,j,isbn,vet[2];
    printf("Digite o ISBN:");
    scanf("%d",&isbn);
    for(i=0;i<quant;i++)
    {
        if(vetor2[i].isbn == isbn)
        {
            //Exibindo os valores
            printf("IBSN:%d\n",vetor2[i].isbn);
            printf("Titulo:%s\n",vetor2[i].titulo);
            printf("Genero:%s\n",vetor2[i].genero);
            for(j=i;j<2+i;j++)
            {
                printf("Autores:%s\n",vetor2[j].autores);
            }
        }
    }
}
void listar()//-->nao esta funcionando
{
    struct Livros vetor2[2];
    int i;
    for(i=0;i<2;i++)
    {
        //Exibindo os valores
        printf("IBSN:%d\n",vetor2[i].isbn);
        printf("Titulo:%s\n",vetor2[i].titulo);
        printf("Genero:%s\n",vetor2[i].genero);
        printf("Paginas:%d\n",vetor2[i].numerodepaginas);

    }
}

int main()
{
    int r;
    r=cadastro();
    //listar_todos();
    listar_um(r);
    return 0;

}
