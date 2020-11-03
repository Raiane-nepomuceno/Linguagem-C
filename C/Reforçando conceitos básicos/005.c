#include<stdio.h>
main()
{
	int x,y,z;
	printf("Digite o primeiro lado:");
	scanf("%d",&x);
	printf("Digite o segundo lado:");
	scanf("%d",&y);	
	printf("Digite o terceiro lado:");
	scanf("%d",&z);
	if (x<y+z && y<x+z && z<y+x)
	{
		printf("Com base nos valores e possivel formar um triangulo!\n");
		if (x == y && y == z)
		printf("Forma o triangulo equilatero pois os lados sao iguais.\n");
		if (x==z && z!=y || y == x && x!=z  || z == y && y!=x )
		printf("Forma o triangulo isosceles pois dois lados sao iguais\n");
		if (x!=y && y!=z && z!=x)
		printf("Forma o triangulo escaleno pois os lados sao diferentes\n");
	}
	
	else
	{
		printf("Nao e possivel formar o triangulo\n");
	}
	
}
