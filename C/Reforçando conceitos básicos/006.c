#include<stdio.h>
#include<math.h>
main()
{
	float a,b,x,c,d,x1,x2;
	printf("Digite o valor de A:");
	scanf("%f",&a);
	printf("Digite o valor de B:");
	scanf("%f",&b);
	printf("Digite o valor de C:");
	scanf("%f",&c);
	d = pow(b,2) - 4 * a * c;
	if (d < 0)
	{
		printf("Nao existe a raiz real\n");
	}
	if (d == 0)
	{
		printf("Existe uma raiz real!\n");
		x = (-b)/(2*a);
		printf("A raiz: %f",x);
	}
	if (d>0)
	{
		printf("Existem duas raizes reais\n");
		x1 =((-b + sqrt(d)/(2*a) ));
		x2 = ((-b - sqrt(d)/(2*a)));
		printf("X1 = %f , x2 = % f\n",x1,x2);
		
	}
}
