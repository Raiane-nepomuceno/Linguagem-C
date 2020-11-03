#include<stdio.h>
main()
{
    float m[ ] = { 1.0, 3.0, 5.75, 2.345 };
    float *pf;
    pf = &m[2];
    printf("%f", *pf); /* imprime 5.75 */

}
