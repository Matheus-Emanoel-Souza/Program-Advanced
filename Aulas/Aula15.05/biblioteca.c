#include"biblioteca.h"
#include<math.h>

void PreparaPrint(char *msg)
{
    char msg_resultado[80] = "";//tem que ser vetor.

    strcpy(msg_resultado,"*---*");//concatena (lugar que vai concatenar,oq vai concatenar).
    strcat(msg_resultado,msg);

    printf("%s",msg_resultado);
}

void MeuPrint(Cveic veic)
{
    printf("*****************************");
    printf("%s",veic.experimento);
    printf("Distância:%2f",veic.experimento);
    printf("vel media:%2f",veic.velocidade);
    printf("Tempo:%2f",veic.tempo);
    printf("******************************");
}

void initCinematica(char *n, float d, float t,Cveic *v)
{
    v->distancia=d;
    v->tempo=t;
    strcpy(v->experimento,n);
}
void calvelocidade(Cveic*veiculo)
{
    veiculo->velocidade=veiculo->distancia/veiculo->tempo;
}