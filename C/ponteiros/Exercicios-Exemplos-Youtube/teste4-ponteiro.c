#include<stdio.h>
main()
{
    int i = 10, *pi;
    pi = &i;
    *pi = 100;
    printf("i:%d\n",i);
    printf("pi:%d\n",*pi);
}
