#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"fonte.h"

conta criaconta()
{
    conta contaCriada;
    printf("Informe seu nome...\n");
    scanf("%49s", &contaCriada.titular);
    printf("Informe sua agencia...\n");
    scanf("%d",&contaCriada.agencia);
    printf("Informe o numero da sua conta..\n");
    scanf("%d",&contaCriada.numero);
    printf("Informe o saldo em sua conta...\n");
    scanf("%.4lf",&contaCriada.saldo);
    return contaCriada;
}

void printaSaldo(conta conta1)
{
    printf("\n---Imprimindo informações---\n");
    printf("Nome:%s\n",conta1.titular);
    printf("Conta:%d\n",conta1.numero);
    printf("Agencia:%d\n",conta1.agencia);
    printf("Saldo:%.1lf\n",conta1.saldo);
    //printf("Nome:%s\nConta:%dAgencia:%dSaldo:%lf\n",conta1.titular,conta1.numero,conta1.agencia,conta1.saldo);
}