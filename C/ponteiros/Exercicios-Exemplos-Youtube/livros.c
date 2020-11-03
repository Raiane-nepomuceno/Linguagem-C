#include<stdio.h>
struct Livros{
	int isbn;
	char titulo[20];
	char genero[20];
	char autores[2][20];
	int numerodepaginas;
};

int cadastro()
{
    struct Livros vetor2[2];
    int i,j,quant;
    for(i=0;i<2;i++)
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
        for (j=i;j<i+2;j++)
        {
            printf("Digite o nome dos autores:");
            scanf("%s",&vetor2[j].autores);
            fflush(stdin);

        }

        //Exibindo os valores
        //printf("IBSN:%d\n",vetor2[i].isbn);
        //printf("Titulo:%s\n",vetor2[i].titulo);
        //printf("Genero:%s\n",vetor2[i].genero);
        //printf("Paginas:%d\n",vetor2[i].numerodepaginas);

    }
}
void listar_um()
{
    struct Livros vetor2[2];
    int i,j,isbn;
    printf("Digite o ISBN:");
    scanf("%d",&isbn);
    for(i=0;i<2;i++)
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
void listar()
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
    int p;
    cadastro();
    listar_um();
    //listar();
    return 0;

}
