#include<stdio.h>
main()
{
/*int x,
x = 10;
int *ponteiro = &x
printf("%d\n",*ponteiro);
}
*/
/*int  x = 10;
int y = x ;
 x = 20;
 printf("%d %d",x,y);*/

 int x = 10;
 int *ponteiro = &x;

 ponteiro = &x;

 int y = 20;
 *ponteiro = 20;

 printf("%d %d",x,y);
}
