#include<stdio.h>
#include<stdlib.h>

#define MAX_PROD 50

typedef float precos;

typedef enum prod{
    TV = 10, //Recebe 0
    SOM,//Recebe 1
    CELULAR//recebe 2
}produto;

produto lista_de_produtos[MAX_PROD];
precos lista_de_precos[MAX_PROD];

void imprimirProduto(produto prod)
{
    switch (prod)
    {
    case TV:
        printf("O produto escolhido foi a TV");
        break;
    case SOM:
        printf("O produto escolhido foi o SOM");
        break;
    case CELULAR:
        printf("O produto escolhido foi celular");
        break;    
    default:
        break;
    }
};

void addProduto(produto prod, precos preco)
{
    static int idx = 0; //variavel statica que vai declarar idx como 0 apenas na primeira vez que rodar o programa.

    lista_de_produtos[idx] = prod;
    lista_de_precos[idx] = preco;
    idx++;
}
int main()
{
    addProduto(TV,999.99);
    addProduto(SOM,299.99);
    addProduto(CELULAR,899.99);
    //produto escolha_feita = CELULAR;
    //printf("o prod escolhido foi:%i",escolha_feita);
    //imprimirProduto(escolha_feita);
}