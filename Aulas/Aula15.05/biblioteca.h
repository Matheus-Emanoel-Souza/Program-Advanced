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
}cinematicaveiculo;

void MeuPrint(char *msg);
