#include<stdio.h>
main()
{
int x = 10;
int *pi, *pj;
pi = &x; /* *pi é igual a 10 */
pj = pi; /* *pj é igual a 10 */
(*pi)++; /* (*pi, *pj, x) são iguais a 11 */
(*pj)++; /* (*pi, *pj, x) são iguais a 12 */
printf("%d", x); /* imprime 12 */
}
