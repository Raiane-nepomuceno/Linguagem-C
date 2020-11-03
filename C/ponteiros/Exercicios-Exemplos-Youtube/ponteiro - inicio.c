#include<stdio.h>
main()
{
    int x = 10, *px;
    px = &x;
    *px = 50;
    printf("O endereco de x:%d e px:%d",x,*px);
}
