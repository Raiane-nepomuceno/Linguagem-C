#include<stdio.h>

main()
{
    int x = 10;
    double y = 20.50;
    char z = "a";

    int *px;
    px = &x;
    double *py = &y;
    char *pz = &z;

    double soma = *px + *py;
    printf("Endereco x = %d - valor x = %d\n",px,*px);
    printf("Endereco y = %d - valor x = %d\n",py,*py);
    printf("Endereco z = %d - valor x = %d\n",pz,*pz);
    printf("Soma= %f",soma);
}
