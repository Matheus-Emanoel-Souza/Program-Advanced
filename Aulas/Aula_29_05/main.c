//Lista encadeada.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    no*ultimo;
    int contador;
}lista;

no* criano(Livro book)
{
    no* NOVO_NO = (no*)malloc(sizeof(no));
    NOVO_NO->info = book;
    NOVO_NO->proximo = NULL;

    //return NOVO_NO;
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
lista->marcador = no;
lista->ultimo = no;
lista->contador ++;
}


void imprimirLista(lista lista)
{
    lista.marcador = lista.primeiro;

    while (lista.marcador !=NULL)
    {
        imprimirLivro(lista.marcador);
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

void exclui(lista *lst, char *nome)
{
    no* aux = NULL;
    no* excluido = NULL;
    lst->marcador = lst->primeiro;

    while (lst->marcador !=NULL)
    {
        if (strcmp(lst->primeiro->info.titulo,nome)==0)
    {
        lst->marcador= lst->primeiro; 
        lst->primeiro=lst->primeiro->proximo;
        free(lst->marcador);
        lst->marcador= lst->primeiro;
    }
    else
    {
        lst->marcador = lst->primeiro->proximo;
        aux=lst->marcador;
        if (strcmp(lst->marcador->info.titulo,nome)==0)
        {
            //aux->proximo = aux->proximo->proximo;
            excluido = lst->marcador->proximo;
            aux = excluido->proximo;
            free(excluido);
            lst->marcador->proximo = aux;
        }
        lst->marcador = lst->marcador->proximo;
    }
    lst->marcador = lst->primeiro;
    }
}

int main()
{
    Livro infantil = {"Rei leão","Simba",1998};
    Livro outro_livro = {"Branca de neve","anos",1900};

    lista lista_de_livros = cria_lista();
    no *novo_no = criano(infantil);
    novo_no = criano(outro_livro);
    add_na_lista(novo_no, &lista_de_livros);
    novo_no = criano(outro_livro);
    add_na_lista(novo_no,&lista_de_livros);

    Livro de_hoje = {"narnia","vcs",2024};
    novo_no = criano(de_hoje);

    //novo_no = criano({"narnia","vcs",2024});

    imprimirLista(lista_de_livros);
    printf("\nDe novo\n");
    char * var = "Rei leao";
    exclui(&lista_de_livros,var);

}