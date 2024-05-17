#include<stdlib.h>
#include"biblioteca.h"
//<> -> pesquisa na pasta do compilador.
//"" -> pesquisa na própria pasta do projeto.

int main()
{
    Cveic exp_1; //Criou um objeto do protótipo cveic
    initCinematica("Teste1",1000,10,&exp_1);//Chamou a função de cinemática.
    calvelocidade(&exp_1);
    MeuPrint(exp_1);
    return 0;
}