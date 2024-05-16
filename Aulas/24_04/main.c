#include <stdio.h>
#include <string.h>

typedef enum tipo
{
    MULT,
    TEXT
}Tipotela;

typedef struct tela
{
    char titulo[40];
    char info[60];
    int opcao;

    Tipotela Tipo_tela
}tela;

tela telas_do_programa[3]=
{
    {"MENu","1 PARA PROX TELA E 2 PARA SAIR", 0,MULT},
    {"Tela2","1 para voltar, 2 para proxima, 3 para sair", 0, MULT},
    {"Tela 3","1 p voltar, 2 para menu e 3 para sair", 0,MULT}
};

void imprimirTela(int n_tela)
{
    system("clear");
    printf("%s",telas_do_programa[n_tela].titulo);
    printf("%s",telas_do_programa[n_tela].info);

}

int mudaestado(int estado,int escolha_do_usuario){
if (escolha_do_usuario ==1)
        {
            estado = 1;
        }else if (escolha_do_usuario==2)
        {
            estado = 100;
        }
        escolha_do_usuario = 0;
}
int main()
{
    int estado = 0;
    int escolha_do_usuario;
    switch (estado)
    {
    case 0:
        imprimirTela(0);
        scanf("%i",escolha_do_usuario);
        mudaestado(estado,escolha_do_usuario);
        break;
        case 1:
        imprimirTela(1);
        if (escolha_do_usuario ==1)
        {
            estado = 2;
        }else if (escolha_do_usuario == 2)
        {
            estado=100;
        }
        escolha_do_usuario = 0;
        break;
        case 2:
        imprimirTela(2);
        if (escolha_do_usuario ==1)
        {
            estado = 2;
        }else if (escolha_do_usuario == 2)
        {
            estado=1;
        }
        escolha_do_usuario = 0;

    default:
        break;
    }

}

// char *pch;

// pch = strtok(palavra," ");
// printf("ponteiro : %s\n",pch);

// do{
//     printf("digite uma palavra sem espaço:\n");
//     scanf("%s",palavra);
// }while (strcmp("noite",palavra) !=0);
//     printf("Deu boa\n");

// printf("digite uma palavra sem espaço:\n");
// scanf("%S",palavra);

// if(strcmp("noite",palavra)){
//     printf("Brabo");
// }
// else{
//     printf("Ta errado mula");
// }
// char result[40];
//     char *outra_string = "Turma";
//     char *Console;

//     strcpy(result, "boa\n");
//     printf ("saida: %s", result);
//     strcpy(result, "Noite\n");
//     printf ("saida: %s", result);
//     strcpy(result, outra_string);
//     printf ("saida: %s", result);

//     printf("Escreva uma string\n");