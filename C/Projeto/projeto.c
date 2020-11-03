[22:56, 01/12/2019] vitor(C): void listar_todosemprestimos(struct Emprestimo *vetor2,int tam)
{

    FILE *arq;
    arq = fopen("Emprestimos.dat","rb");
	if(arq==NULL){
		printf("\n Problema ao abrir o arquivo");
		exit(0);
	}
	else{

		struct Emprestimo x[tam];
		fread(&x,sizeof(struct Emprestimo),tam,arq);

    	int i;

    	//Contador do numero de usuarios
    	int cont=0;

    	for(i=0;i<tam;i++)
    	{
    	//incrementa contador, ele recebe 1 no comeco
    	cont++;
    	printf("\nO EMPRESTIMO %d ",cont);
    	printf("\n");
        printf("\nISBN:%d",x[i].isbn);
        printf("\nCPF:%d",x[i].cpf);
        printf("\nData de retirada:%s",x[i].dataRetirada);
        printf("\nData de retirada:%s",x[i].dataDevolucao);
        printf("\nValor da multa: %f",x[i].valorMulta);
        printf("\n");
    	}
		fclose(arq);
}};

int cadastrar_emprestimo(struct Emprestimo *vetor2)
{
    int i,contE=0;
    char op[]="sim";
    char op_aut[10];//op_tel
    int cont_aut=0;//cont dos autores

    while(strcmp(op,"sim")==0)
    {
    	vetor2 = (struct Emprestimo *) realloc(vetor2,(contE+1)*sizeof(struct Emprestimo));
        printf("\nDigite o isbn do livro:");

        scanf("%d",&vetor2[contE].isbn);
        fflush(stdin);

        printf("\nDigite o cpf do usuario:");
        scanf("%d",&vetor2[contE].cpf);
        fflush(stdin);

        printf("\nDigite a data de retirada:");
        scanf("%s",vetor2[contE].dataRetirada);
        fflush(stdin);

        printf("\nDigite a data de devolucao:");
        scanf("%s",vetor2[contE].dataDevolucao);
        fflush(stdin);


        printf("\nDigite o valor da multa:");
        scanf("%f",&vetor2[contE].valorMulta);
        fflush(stdin);
		contE++;

		 printf("\nDeseja adicionar outro emprestimo? [sim/nao]:");
        gets(op);
        fflush(stdin);

        //Arquivo
        FILE *arq;
        arq = fopen("Emprestimos.dat","ab+");
 		fwrite(&vetor2[contE],sizeof(struct Emprestimo),1,arq);
 		fclose(arq);

		 //if de finalizacao
          if(strcmp(op,"nao")==0)
            {
                printf("\nProcesso total finalizado\n");
                break;
            }
	}
       	return contE;
}
