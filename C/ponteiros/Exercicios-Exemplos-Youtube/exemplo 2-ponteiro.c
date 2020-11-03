#include<stdio.h>
main()
{
int a = 10;
int *b;
printf("Conteudo de a: %d\n", a);
printf("Endereco de a: %d\n", &a);

b = &a;
printf("Conteudo de b: %d\n", b);
printf("Conteudo da variável apontada por b: %d\n", *b);

*b = 15; // atribuicao indireta
printf("Conteudo de a: %d\n", a);
printf("Conteudo da variável apontada por b: %d\n", *b);
printf("Conteudo de a: %d\n", *(&a));
}
