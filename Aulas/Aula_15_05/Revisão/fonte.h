#include<string.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct
{
    char titular[50];
    int agencia;
    int numero;
    double saldo;
}conta;

conta criaconta();
void printaSaldo(conta conta1);