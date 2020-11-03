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
main()
{
	int op,op2=0,pesq=0,i=0,tam=0,cod=0,cod1=0,dep2=0;
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
				if (tam<quant_func)
				{
					printf("Digite o codigo do funcionario:");
					scanf("%d",&vetor[tam].codigo);
					printf("Digite o cargo:");
					scanf("%s",&vetor[tam].cargo);
					printf("Digite o nome do funcionario:");
					scanf("%s",&vetor[tam].nome);
					printf("Digite a quantidade de dependentes:");
					scanf("%d",&vetor[tam].dependente);
					printf("Digite o salario do funcionario:");
					scanf("%f",&vetor[tam].salario);
					//mostrando os valores
					printf("Codigo:%d\n",vetor[tam].codigo);
					printf("Cargo:%s\n",vetor[tam].cargo);
					printf("Nome:%s\n",vetor[tam].nome);
					printf("Dependentes:%d\n",vetor[tam].dependente);
					printf("Salario:%f\n",vetor[tam].salario);
					tam++;
				}
				else{
					printf("O limite de espaco para os funcionario ja foram preenchidos\n");
				}
				break;
			case 2:
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
			case 3:
				//imprimindo todos
				printf("\tImprimindo os funcionarios cadastrados\n");
				for(i=0;i<tam;i++)
				{
					printf("\n");
					printf("Codigo:%d\n",vetor[i].codigo);
					printf("Cargo:%s\n",vetor[i].cargo);
					printf("Nome:%s\n",vetor[i].nome);
					printf("Dependentes:%d\n",vetor[i].dependente);
					printf("Salario:%f\n",vetor[i].salario);
					
				}
				break;
			case 4:
				printf("\tMenu de Alteracoes\n");
				printf("1-Codigo\n");
				printf("2-Cargo\n");
				printf("3-Nome\n");
				printf("4-Dependentes\n");
				printf("5-Salario\n");
				printf("\tDigite o que deseja alterar:");
				scanf("%d",&op2);
				switch(op2)
				{
					pesq = 0;
					case 1:
						printf("\tDigite o antigo codigo do funcionario:");
						scanf("%d",&cod);
						printf("\n");
						printf("\tDigite o novo codigo do funcionario:");
						scanf("%d",&cod1);
						for(i=0;i<tam;i++)
						{
							if (vetor[i].codigo == cod)
							{
								pesq++;
								vetor[i].codigo = cod1;
								printf("Novo codigo:%d\n",vetor[i].codigo);
								printf("Cargo:%s\n",vetor[i].cargo);
								printf("Nome:%s\n",vetor[i].nome);
								printf("Dependentes:%d\n",vetor[i].dependente);
								printf("Salario:%f\n",vetor[i].salario);
					
							}
						}
						if(pesq==1)
						{
							printf("Codigo aletrado com sucesso!\n");
						}
						else{
							printf("Codigo nao localizado.Tente novamente!\n");
						}
						break;
					//cargo
					case 2:
						printf("Digite o codigo do funcionario:");
						scanf("%d",&cod);						
						
						printf("\n");
						
						printf("Digite o novo cargo do funcionario:");
						scanf("%s",&cargo_func);
						
						for(i=0;i<tam;i++)
						{
							if (vetor[i].codigo == cod)
							{
								pesq++;
								strcpy(vetor[i].cargo,cargo_func);
								printf("codigo:%d\n",vetor[i].codigo);
								printf("Cargo:%s\n",vetor[i].cargo);
								printf("Nome:%s\n",vetor[i].nome);
								printf("Dependentes:%d\n",vetor[i].dependente);
								printf("Salario:%f\n",vetor[i].salario);
							}
						}
						if(pesq==1)
						{
							printf("Quantidade de dependentes atualizado com sucesso!\n");
						}
						else{
							printf("Funcionario nao localizado.Tente novamente!\n");
						}
						break;
					case 3:
						printf("\tDigite o codigo do funcionario:");
						scanf("%d",&cod);
						
						printf("\n");
						
						printf("Digite o novo nome do funcionario:");
						scanf("%s",&nome_func);
						for(i=0;i<tam;i++)
						{
							if (vetor[i].codigo == cod)
							{
								pesq++;
								strcpy(vetor[i].nome,nome_func);
								printf("codigo:%d\n",vetor[i].codigo);
								printf("Cargo:%s\n",vetor[i].cargo);
								printf("Nome:%s\n",vetor[i].nome);
								printf("Dependentes:%d\n",vetor[i].dependente);
								printf("Salario:%f\n",vetor[i].salario);
							}
						}
						if(pesq == 1)
						{
							printf("Nome alterado com sucesso!\n");
						}					
						else{
							printf("Funcionario nao localuzado.Tente novamente!\n");
						}
						break;
					case 4:
						printf("Digite o codigo do funcionario:");
						scanf("%d",&cod);						
						
						printf("\n");
						
						printf("Digite a nova quantidade de dependentes:");
						scanf("%d",&dep2);
						
						for(i=0;i<tam;i++)
						{
							if (vetor[i].codigo == cod)
							{
								pesq++;
								vetor[i].dependente = dep2;
								printf("codigo:%d\n",vetor[i].codigo);
								printf("Cargo:%s\n",vetor[i].cargo);
								printf("Nome:%s\n",vetor[i].nome);
								printf("Dependentes:%d\n",vetor[i].dependente);
								printf("Salario:%f\n",vetor[i].salario);
							}
						}
						if(pesq==1)
						{
							printf("Quantidade de dependentes atualizado com sucesso!\n");
						}
						else{
							printf("Funcionario nao localizado.Tente novamente!\n");
						}
						break;
					case 5:
						printf("Digite o codigo do funcionario:");
						scanf("%d",&cod);						
						
						printf("\n");
						
						printf("Digite o novo salario do funcionario:");
						scanf("%f",&sal);
						
						for(i=0;i<tam;i++)
						{
							if (vetor[i].codigo == cod)
							{
								pesq++;
								vetor[i].salario = sal;
								printf("codigo:%d\n",vetor[i].codigo);
								printf("Cargo:%s\n",vetor[i].cargo);
								printf("Nome:%s\n",vetor[i].nome);
								printf("Dependentes:%d\n",vetor[i].dependente);
								printf("Salario:%f\n",vetor[i].salario);
							}
						}
						if(pesq==1)
						{
							printf("O valor do salario foi atualizado com sucesso!\n");
						}
						else{
							printf("Funcionario nao localizado.Tente novamente!\n");
						}
						break;						
					default:
						printf("Numero selecionado nao condiz com o menu de alteracoes\n");
				}
			default:
				printf("Finalizando o programa...\n");
		}

	}while(op>=1 && op<=4);
	system("pause");
}
