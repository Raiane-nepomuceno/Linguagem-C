#include<stdio.h>
 #include<stdlib.h>
 #define quant_hab 2
 struct habitante{
 	float salario;
 	int filho;
	int idade;
	char sexo[1];	
 };
 main()
 {
 	int i,cont_f=0,cont_filho = 0,cont_sal = 0;
 	float media_sal = 0,media_filho = 0,maior_sal =0,menor_sal=0;
	struct habitante vetor[quant_hab];
	for(i = 0;i<quant_hab;i++)
	{
		printf("Digite o salario:");
		scanf("%f",&vetor[i].salario);
		
		//nao esta colocando no vetor
		printf("Digite o sexo:");
		scanf("%s",&vetor[i].sexo);

		printf("Digite a idade:");
		scanf("%d",&vetor[i].idade);
		
		printf("Digite a quantidade de filhos:");
		scanf("%d",&vetor[i].filho);
		
		menor_sal = vetor[0].salario;
		if (vetor[i].salario>maior_sal)
		{
			maior_sal = vetor[i].salario;
		}
		if(vetor[i].salario<menor_sal)
		{
			menor_sal = vetor[i].salario;
		}
		
	}
	for(i=0;i<quant_hab;i++)
	{
		media_sal = media_sal + vetor[i].salario;
		cont_sal++;
		media_filho = media_filho + vetor[i].filho;
		cont_filho++;
	}
	for(i=0;i<quant_hab;i++)
	{
		if(vetor[i].sexo == "f" || vetor[i].sexo=="F")
		{
			cont_f++;
		}
	}
	media_sal = media_sal/cont_sal;
	media_filho = media_filho/cont_filho;
	printf("A media de salario:%f\n",media_sal);
	printf("A media de filhos:%f\n",media_filho);
	printf("O maior salario:%f\n",maior_sal);
	printf("O menor salario:%f\n",menor_sal);
	printf("Ha %d mulheres",cont_f);

	system("pause");
	  
 	}
