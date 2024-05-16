#include<stdio.h>
#include<stdlib.h>

#define MAX_PROD 50

typedef float precos;

typedef enum prod{
    TV, //Recebe 0
    SOM,//Recebe 1
    CELULAR//recebe 2
}produto;

produto lista_de_produtos[MAX_PROD];
precos lista_de_precos[MAX_PROD];

void imprimirProdutos(int qtd)
{
    for (int i = 0; i < qtd; i++)
    {
        switch (lista_de_produtos[i])
            {
            case TV:
                printf("O produto %d escolhido foi a TV, que custa: R$%.2f:\n", i,lista_de_precos[i]);
            break;
            case SOM:
                printf("O produto %d escolhido foi o SOM, que custa: R$%.2f:\n", i,lista_de_precos[i]);
            break;
            case CELULAR:
                printf("O produto %d escolhido foi celular, que custa: R$%.2f:\n", i,lista_de_precos[i]);
            break;    
                default:
                printf("Deu ruim amg!");
            break;
            }
    }
    
};

int addProduto(produto prod, precos preco)
{
    static int idx = 0; //variavel statica que vai declarar idx como 0 apenas na primeira vez que rodar o programa.

    lista_de_produtos[idx] = prod;
    lista_de_precos[idx] = preco;
    idx++;
    return idx;
}

int tela()
{
    produto escolha;

    float Valor;

    printf("Escolha um produto:\n1 para Tv\n2 para SOM\n3 para Celular\n-1 para sair\n");
    scanf("%d",&escolha);
    printf("Agora escreva o seu valor:");
    scanf("%f",&Valor);

    if (escolha!=1)
    {
       return addProduto(escolha,Valor);
    }
    
}

int main()
{
    int indice;
    tela();
    indice = tela;
    
    //indice = addProduto(TV,999.99);
    //indice = addProduto(SOM,299.99);
    //indice = addProduto(CELULAR,899.99);
    //produto escolha_feita = CELULAR;
    //printf("o prod escolhido foi:%i",escolha_feita);
    //imprimirProduto(escolha_feita);
    imprimirProdutos(indice);
    printf("Rodou o fino meu bom ");
    return 0;
}