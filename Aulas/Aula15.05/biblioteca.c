#include"biblioteca.h"


void PreparaPrint(char *msg)
{
    char msg_resultado[80] = "";//tem que ser vetor.

    strcpy(msg_resultado,"*---*");//concatena (lugar que vai concatenar,oq vai concatenar).
    strcat(msg_resultado,msg);

    printf("%s",msg_resultado);
}

void MeuPrint(char *msg)
{
    PreparaPrint(msg);
    printf("%s",msg);
}