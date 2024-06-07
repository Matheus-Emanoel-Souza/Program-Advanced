//Lista encadeada.
//aula 29/05/2024.
#include<stdio.h>
#include<stdlib.h>

typedef struct livro
{
    char titulo[40];
    char autor[40];
    int ano;
}Livro;

typedef struct no
{
    Livro info;
    struct no * proximo;
}no;

typedef struct lista
{
    no*primeiro;
    no*marcador;
    int contador;
}lista;

no criano(Livro book)
{
    no NOVO_NO;
    NOVO_NO.info = book;
    NOVO_NO.proximo = NULL;

    return NOVO_NO;
}

lista cria_lista()
{
    lista nova_lista={NULL, NULL, 0};
    return nova_lista;
}

void add_na_lista(no* no, lista* lista)
{
if (lista->contador == 0)
{
    lista->primeiro=no;
    lista->marcador = no;
}else
{
    lista->marcador->proximo = no;
}
lista->contador ++;
}


void imprimirLista(lista lista)
{
    lista.marcador = lista.primeiro;

    while (lista.marcador !=NULL)
    {
        imprimirLivro(lista.marcador->info);
        lista.marcador = lista.marcador->proximo;
    }
    
}

void printLivro(Livro livro)
{
 printf("---------------------------\n");
 printf("LIVRO: %s\n",livro.titulo);
 printf("AUTOR: %s\n",livro.autor);
 printf("ANO: %s\n",livro.ano);

}

int main()
{
    Livro infantil = {"Rei leão","Simba",1998};
    Livro outro_livro = {"Branca de neve","anos",1900};

    lista lista_de_livros = cria_lista();
    no novo_no = criano(infantil);
    no no_renovado = criano(outro_livro);
    add_na_lista(&novo_no, &lista_de_livros);
    novo_no = criano(outro_livro);
    add_na_lista(&no_renovado,&lista_de_livros);

    imprimirLivro(infantil);

}