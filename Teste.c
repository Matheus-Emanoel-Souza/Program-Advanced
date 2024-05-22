#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char fraseoriginar[200];
    char palavra[50];
    char *ponteiro;

    strcpy(fraseoriginar,"A PIPA DO VOVO NAO SOBE MAIS");
    fgets(palavra,sizeof(palavra),stdin);
    ponteiro = strstr(fraseoriginar,palavra);

    if (ponteiro != NULL)
    {
        printf("%c",*ponteiro);
    }
    else{
        printf("ponteiro nulo.");
    }
    

    // strstr(1a,2a);
    //1a - aonde eu desejo realizar a busca
    //2a - Qual tring eu quero buscar.

    //fgets(1a,2a,3a);
    //1a - aonde desejo salvar. Qual variável.
    //2a - quantidade maxima de caracteres para ler. Colocar o tamanho do vetor igual o tamanho de onde irei ler
    //3a - Qual arquivo quero ler. Como quero ler do teclado, uso stdin;

}
