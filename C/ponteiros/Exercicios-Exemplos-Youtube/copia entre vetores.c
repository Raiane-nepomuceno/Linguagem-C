#include<stdio.h>
#define TAM_MAX 5
main()
{
    int VetReais[3], Copia[3];
    int i;
     for(i=0; i<3; i++)
    {
        printf("digite o elemento:");
        scanf("%d",&VetReais[i]);
    }
    for(i=0; i<3; i++)
    {
       Copia[i] = VetReais[i];
    }
      for(i=0;i<3;i++)
      {
        printf("%d\n",Copia[i]);
      }
}
