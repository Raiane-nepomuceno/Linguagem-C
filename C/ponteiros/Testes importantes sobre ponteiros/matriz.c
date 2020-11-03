#include<stdio.h>
void cria_matriz(int (*ponteiro)[4])
{
    int i,j;

    for( i = 0; i < 3; i++ )
    {
        for( j = 0; j < 4; j++ )
        {
            printf("Digite o elemento linha %d e coluna %d:",i,j);
            scanf("%d",&ponteiro[i][j]);
        }
        printf("\n");
    }

}
void mostra_matriz(int (*ponteiro)[4])
{
    int i,j;
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 4; j++ )
            printf("%3d", ponteiro[i][j] );
        printf("\n");
    }
}

main()
{
    int i = 0;
    int j = 0;

    int v[3][4];
    int (*p)[4];
    p = v;


    cria_matriz(p);
    mostra_matriz(p);
}
