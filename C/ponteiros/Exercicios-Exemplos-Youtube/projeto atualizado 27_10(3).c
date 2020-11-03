#include <stdio.h>
#include<stdlib.h>
#include <string.h>

struct usuario{
    int cpf[11];
    char nome[20];
    char rua[25];
    int nro;
    int cep;
    //vetor de caracteres(email) -> observar isso!
    char email[40];
    //vetor de telefones;
    int tel;
    int data_nasc;
    char profissao[35];
};

    struct Emprestimo{
	int cpf;
	int isbn;
	char dataRetirada[20];
	char dataDevolucao[20];
	float valorMulta;
};
struct livros
{
	int isbn;
	char titulo[20];
	char genero[20];
	char autores[20];
	int numerodepaginas;
};
void menu(){
        printf("1 - Submenu de usuarios\n");
        printf("2 - Submenu de livros\n");
        printf("3 - Submenu de emprestimos\n");
        printf("4 - Submenu de relatorios\n");
        printf("5 - Sair\n");
}
void submenu_usuario()
{
        printf("1-Cadastrar usuarios\n");
        printf("2-Listar todos\n");
        printf("3-Listar um elemento\n");
        printf("4-Incluir\n");
        printf("5-Alterar\n");
        printf("6-Excluir\n");
}
void submenu_emprestimo()
{
        printf("1-Cadastrar usuarios\n");
        printf("2-Listar todos\n");
        printf("3-Listar um elemento\n");
        printf("4-Incluir\n");
        printf("5-Alterar\n");
        printf("6-Excluir\n");
}
int cadastrar_usuario()
{
    int i,cont=0,cont_usuario;
    char op[]="sim";
    char op_tel[10];
    char op_email[10];
    struct usuario vetor1[40];

    while(strcmp(op,"sim")==0)
    {
        cont_usuario++;
        printf("\nDigite o cpf do usuario:");
        scanf("%d",&vetor1[cont].cpf);
        fflush(stdin);

        printf("\nDigite o nome do usuario:");
        scanf("%s",&vetor1[cont].nome);
        fflush(stdin);

        printf("\nDigite a rua:");
        scanf("%d",&vetor1[cont].rua);
        fflush(stdin);

        printf("\nDigite o numero:");
        scanf("%d",&vetor1[cont].nro);
        fflush(stdin);

        printf("\nDigite o cep:");
        scanf("%d",&vetor1[cont].cep);
        fflush(stdin);

        printf("\nDigite a data de nascimento");
        scanf("%d",&vetor1[cont].data_nasc);
        fflush(stdin);

        //cadastro de emails

    	printf("\nCadastrar email? [sim/nao]:");
         scanf("%s",&op_email);
         fflush(stdin);

        int cont_email = 0;
        //cadastro dos emails -->vetor
        while(op_email!="nao")
        {

        printf("\nDigite o email do usuario:");
        scanf("%s",&vetor1[cont_email].email);
        fflush(stdin);
        cont_email++;


        printf("\nCadastrar mais emails? [sim/nao]:");
        scanf("%s",&op_email);
        fflush(stdin);

        if(strcmp(op_email,"nao")==0)
        	{
            printf("Processo finalizado");
            break;
        	}
        }

        //Cadastro dos telefones
        printf("\nDeseja cadastrar telefone do usuario[sim/nao]:");
        scanf("%c",&op_tel);
        fflush(stdin);

        int cont_tel=0;
        //cadastro dos telefones -->vetor
        while(op_tel!="nao")
        {
                printf("\nDigite o telefone do usuario:");
                scanf("%s",&vetor1[cont_tel].tel);
                fflush(stdin);
                cont_tel++;

         printf("\nDeseja cadastrar mais telefones do usuario[sim/nao]:");
         scanf("%s",&op_tel);
         fflush(stdin);

            if(strcmp(op_tel,"nao")==0)
            {
                printf("Processo finalizado\n");
                break;
            }
        }


        printf("Digite a profissao");
        scanf("%s",&vetor1[cont].profissao);
        fflush(stdin);


        printf("\nDeseja adicionar outro usuario [sim/nao]:");
        scanf("%s",&op);
        fflush(stdin);

        //contador de numero de usuarios
        cont++;

        //if de finalizacao
          if(strcmp(op,"nao")==0)
            {
                printf("\nProcesso total finalizado\n");
                break;
            }
    }
    return cont_usuario;
}
void listar_todos(int vetor1[],int quantidade)
{
    //int i;
    //int *ponteiro = &vetor1;
//    ponteiro = &vetor1,
  //  for(i=0;i<quantidade;i++)
    /*{
        printf("CPF:%d",vetor1[i].cpf);
        printf("Nome:%s",vetor1[i].nome);
        /*printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");
        printf("");*/
 //       printf("\n");


}
void submenu_livro()
{
        printf("1-Cadastrar usuarios\n");
        printf("2-Listar todos\n");
        printf("3-Listar um elemento\n");
        printf("4-Incluir\n");
        printf("5-Alterar\n");
        printf("6-Excluir\n");
}
void submenu_relatorio()
{
    printf("A-Mostrar todos os dados dos usuarios maiores que a idade fornecida\n");
    printf("B-Mostrar todos os dados do livro que tenha mais de x autores\n");
    printf("C-Mostrar o cpf da pessoa,nome da pessoa ou ISBN do livro ou titulo do livro e todas as informacoes com a data de devolucao de x e y\n");
}
main()
{
    int op,cont_usuario;
    struct usuario vetor1[40];
    struct Emprestimo vetor2[40];
    struct livros vetor3[40];
    menu();
    printf("\nDigite a opcao:");
    scanf("%d",&op);
    if (op==1)
    {
        //Criando submenu usuarios
        int opSUB1 = -1;
        while(opSUB1 != 0){
        	submenu_usuario();
        	printf("\n Escolha qual opcao do curso:");
        	scanf("%d",&opSUB1);

        	//opcoes do submenu
			if(opSUB1 == 1){
				cadastrar_usuario();
			}
        	if(opSUB1 == 2){
        		cont_usuario = cadastrar_usuario();
        		listar_todos(vetor1,cont_usuario);
        	}
		}

    }
    if(op==2)
    {
        submenu_livro();
    }
    if(op==3)
    {
        submenu_emprestimo();
    }
    if(op==4)
    {
        submenu_relatorio();
    }
    if(op>5 && op<0)
    {
        printf("Opcao invalida.Tente novamente!\n");
    }
    if(op==5)
    {
        printf("Finalizando o programa!\n");
    }
}
