#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char fraseoriginar[200];
    char palavra[50];

    strcpy(fraseoriginar,"A PIPA DO VOVO NAO SOBE MAIS");
    fgets(palavra,sizeof(palavra),stdin);


    //fgets(1a,2a,3a);
    //1a - aonde desejo salvar. Qual variável.
    //2a - quantidade maxima de caracteres para ler. Colocar o tamanho do vetor igual o tamanho de onde irei ler
    //3a - Qual arquivo quero ler. Como quero ler do teclado, uso stdin;

}
