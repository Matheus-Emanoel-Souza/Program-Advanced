#include<stdio.h>
#include<stdlib.h>

#define MAX_PROD 50

typedef float Precos;

typedef enum prod{
    TV = 1,     
    SOM,    
    CELULAR 
}Produto;

typedef struct item{
    Produto Produtao;
    Precos val;
}itens;

// enum prod lista_de_produtos[MAX_PROD]; - dessa forma também está correto

void imprimirProdutos( itens *intao, int qnt)
{
    for(int i = 0; i < qnt; i++)
    {
        switch(intao[i].Produtao)
        {
            case TV:
                printf("O produto %d eh uma TV e custa R$%.2f.\n", 
                        i, intao[i]);
                break;
            case SOM:
                printf("O produto %d eh um SOM e custa R$%.2f.\n", 
                        i, intao[i]);
                break;
            case CELULAR:
                printf("O produto %d eh um CELULAR e custa R$%.2f.\n",
                        i, intao[i]);
                break;
            default:
                printf("algo errado.\n");
        }
    }
}

int addProduto(itens *item, Produto prod, Precos preco)
{
   static int idx = 0;
    // lista_produtos[idx] = prod;
    // lista_precos[idx] = preco;
    item[idx].Produtao=prod;
    item[idx].val=preco;
    idx++;

    return idx;
}

Produto tela(){
    Produto escolha;
    
    printf("Escolha um produto:\n");
    printf("1 para TV\n2 para SOM\n3 para CELULAR\n0 para sair\n");
    scanf("%u", &escolha);
    
    return escolha;
}

int main()
{
    int indice = 0;
    //Produto lista_produtos[MAX_PROD];
    //Precos lista_precos[MAX_PROD];
    itens listadeitens[MAX_PROD];
    Produto prod;
    Precos preco;

    do
    {
        prod = tela();
        if(prod != 0)
        {
            printf("Insira o preco do produto: ");
            scanf("%f", &preco);
            indice = addProduto(listadeitens, prod, preco);
        }
    }while(prod != 0);

    imprimirProdutos(listadeitens, indice);
}