#include<stdio.h>
main()
{
int x = 10;
int *pi, *pj;
pi = &x; /* *pi � igual a 10 */
pj = pi; /* *pj � igual a 10 */
(*pi)++; /* (*pi, *pj, x) s�o iguais a 11 */
(*pj)++; /* (*pi, *pj, x) s�o iguais a 12 */
printf("%d", x); /* imprime 12 */
}
