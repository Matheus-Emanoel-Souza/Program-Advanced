#include<stdio.h>
#include<stdlib.h>

int *vetor;

void Hexadecimal(int soma)
{
    printf("Soma em Hexa:%x",soma);
}

void ImprimeVetor(int *Vetor1, int tamanho)
{
    for (size_t i = 0; i < tamanho; i++)
    {
        printf("%d,",Vetor1[i]);
    }
}
//Somar componente dentro do vetor
int SomaDoVetor(int *Vetor1, int tamanho)
{
int soma=0;
    for ( int i = 0; i < tamanho; i++)
    {
    soma = soma + Vetor1[i];
    }

    printf("Soma:%d\n",soma);
    //printf("Soma em Hexa:%x",soma);
    return soma;
}

void main()
{
    //Lê um núemro e cria um vetor do tamanho do número informado.
    int ValorInicial;

    //int vetor0[4] = {10, 20, 30, 40};
    printf("Informe a quantidade de números que deseja informar!!");
    scanf("%d",&ValorInicial);
    int Vetor1[ValorInicial];

    //Monta vetor
    for ( int i = 0; i < ValorInicial; i++)
    {
        int PreencheVetor;
        scanf("%d",&PreencheVetor);
        Vetor1[i]= PreencheVetor;
    }

    //soma dos componentes do vetor
    int soma = SomaDoVetor(Vetor1, ValorInicial);
    Hexadecimal(soma);
    //Imprime o vetor
    //ImprimeVetor(Vetor1,ValorInicial);
}