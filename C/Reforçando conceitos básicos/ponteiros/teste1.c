#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	char *p;
	char frase[] = {"Aprendendo a usar ponteiros!"};
	for(i=0;frase[i]!='\0';i++)
	{
		putchar(frase[i]);
	}
	for(p=frase;*p!='\0';p++)
	{
		putchar(*p);
		system("pause");
	}
}