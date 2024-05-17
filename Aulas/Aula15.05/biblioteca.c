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
    printf("*****************************\n");
    printf("%s\n",veic.experimento);
    printf("Distancia:%.2f\n",veic.distancia);
    printf("vel media:%.2f\n",veic.velocidade);
    printf("Tempo:%.2f\n",veic.tempo);
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