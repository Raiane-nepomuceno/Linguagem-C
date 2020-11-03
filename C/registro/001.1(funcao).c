#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define quant_func 2
struct funcionario{
	int codigo;
	char cargo[20];
	char nome[20];
	int dependente;
	float salario;
};
//tem que pegar por referencia e alterar a variavel
void cadastro_func(struct funcionario vetor[],int tam,tam *ptam)
{
	ptam = &tam;
	printf("Digite o cargo:");
	gets("%s",&vetor[tam].cargo);
	printf("Digite o codigo do funcionario:");
	scanf("%d",&vetor[tam].codigo);
	printf("Digite o nome do funcionario:");
	scanf("%s",&vetor[tam].nome);
	printf("Digite a quantidade de dependentes:");
	scanf("%d",&vetor[tam].dependente);
	printf("Digite o salario do funcionario:");
	scanf("%f",&vetor[tam].salario);	
	tam++;
}
/*struct consulta_func(struct funcionario vetor[])
{
	int pesq =0,i;
	printf("Digite o codigo do funcionario:");
	scanf("%d",&cod);
	for (i=0;i<tam;i++)
	{
		if (vetor[i].codigo==cod)
		{
			pesq++;
			printf("Codigo:%d\n",vetor[i].codigo);
			printf("Cargo:%s\n",vetor[i].cargo);
			printf("Nome:%s\n",vetor[i].nome);
			printf("Dependentes:%d\n",vetor[i].dependente);
			printf("Salario:%f\n",vetor[i].salario);
		}
	}
	if(pesq == 1)
	{
		printf("Funcionario localizado.Fim da busca!\n");
	}
	else{
		printf("Funcionario nao localizado.Fim de busca!\n");
		}
	break;
}
*/
main()
{
	int op,op2=0,i=0,tam=0,cod=0,cod1=0,dep2=0;
	float sal=0;
	char cargo_func[20],nome_func[20];
	struct funcionario vetor[quant_func];
	do{
		printf("\tMenu\n");
	    printf("1-Cadastrar dados de um funcionario\n");
		printf("2-Consultar dados de um funcionario\n");
		printf("3-Imprimir todos os funcionarios\n");
		printf("4-Alterar dados de um funcionario\n");
		printf("\n");
	    printf("\tDigite o que deseja fazer:");
	    scanf("%d",&op);
		switch(op)
		{
			case 1:
				cadastro_func(vetor,&tam);
				break;				
				
	}while(op>=1 && op<=4);
	system("pause");
}
