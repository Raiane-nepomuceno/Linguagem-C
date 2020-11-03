#include<stdio.h>
#include<stdlib.h>
struct Pais{
	int codigo;
	char nome_pais[25];
	char idioma_pais[25];
	char nome_capital[25]	
};
struct Estado{
	char sigla[2];
	char nome_estado[25];
	int num_hab;
	struct Pais pais;
};
struct Cidade{
	int cod_cid;
	char nome_cid[25];
	int num_hab;
	struct Estado estado;
};
main()
{
	int op;
	do{
		printf("\tMenu\n");
		printf("1-Incluir");
		printf("2-Alterar");
		printf("3-Remover");
		printf("O que deseja fazer:");
		scanf("%d",&op);

	}while(op>= 1 && op=<4);
}
