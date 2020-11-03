#include<stdio.h>
#include<stdlib.h>
main()
{
    int i; char *p;
    char frase[ ] = {"Aprendendo a usar ponteiros!"};
    /*acessando os elementos do vetor diretamente pelo
    nome*/

    for(i=0; frase[i] != "\0"; i++)
    putchar(frase[i]);

    /*acessando os elementos do vetor indiretamente por
    meio de ponteiro*/
    for(p=frase; *p != "\0"; p++)
    putchar(*p);
    system("PAUSE");
}
