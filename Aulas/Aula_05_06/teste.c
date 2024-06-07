#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//estrutura do onjeto da lista
typedef struct notas
{
    char Nome_do_aluno[40];
    int P1;
    int P2;
    int P3;
    int Semestral;
}Notas;

typedef struct no
{
    Notas info;
    struct no * proximo;
}No;

typedef struct lista
{
    No *primeiro;
    No *marcador;
    No *ultimo;
    int contador;
}Lista;

No* cria_no(Notas nota)
{
    No* novo_no = (No*)malloc(sizeof(No));
}
