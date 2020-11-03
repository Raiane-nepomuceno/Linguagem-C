#include<stdio.h>
void copia(char *ponteiro1,char *ponteiro2)
{
    while(*ponteiro1!='\0')
    {
        *ponteiro2 = *ponteiro1;
        ++ponteiro1;
        ++ponteiro2;

    }
    *ponteiro2 = '\0';

}


main()
{
    char str1[10];
    char str2[10];
    char *ponteiro1 = str1;
    char *ponteiro2 = str2;
    puts("nome:");
    gets(str1);
    copia(ponteiro1,ponteiro2);

    printf("%s\n",str2);
}
