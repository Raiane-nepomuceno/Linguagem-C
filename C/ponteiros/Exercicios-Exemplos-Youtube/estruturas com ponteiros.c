#include<stdio.h>
main()
{
    struct horario{
            int *phora;
            int *pminuto;
            int *psegundo;
    };
    struct horario hoje;
    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.phora = &hora;
    hoje.pminuto = &minuto;
    hoje.psegundo = &segundo;

    printf("Hora:%i\n",*hoje.phora);
    printf("Minuto:%i\n",*hoje.pminuto);

    *hoje.psegundo=1000;
    printf("Segundo:%i\n",*hoje.psegundo);

}
