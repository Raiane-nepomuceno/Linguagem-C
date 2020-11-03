#include<stdio.h>

main()
{
    int hora,minuto,segunda;
    struct horario{
            int hora;
            int minuto;
            int segundo;
    };
    struct horario agora,*ponteiro;
    ponteiro = &agora;
    ponteiro->hora = 20;;
    ponteiro->minuto = 20;
    ponteiro->segundo = 20;

    printf("%d: %d: %d",agora.hora,agora.minuto,agora.segundo);
}
