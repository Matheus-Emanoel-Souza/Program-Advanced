#include"biblioteca.h"
#include<math.h>

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

void initCinmatica(char *n, float d, float t,Cveic*v)
{
    v->distancia=d;
    v->tempo=t;
    strcpy(v->experimento,n);
}
void calvelocidade(Cveic*veiculo)
{
    veiculo->velocidade=veiculo->distancia/veiculo->tempo;
}