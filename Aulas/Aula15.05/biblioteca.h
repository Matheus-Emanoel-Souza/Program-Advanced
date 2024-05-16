#include<string.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct 
{
    char experimento[40];
    float velocidade;
    float aceleracao;
    float distancia;
    float tempo;
}Cveic;

Cveic initCinmatica(char *n, float d, float t,Cveic*v);
void calvelocidade(Cveic*veiculo);
void MeuPrint(char *msg);
