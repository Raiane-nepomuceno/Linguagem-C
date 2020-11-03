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
    ponteiro->minuto = 80;
    ponteiro->segundo = 50;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + ponteiro->segundo;
    antes.minuto = agora.hora + ponteiro->minuto;
    antes.segundo = ponteiro->minuto + ponteiro ->segundo;
    printf("%d: %d: %d",antes.hora,antes.minuto,antes.segundo);
}
