#include<stdio.h>

int main()
{
    printf ("/****************/\n");
    printf(" /Jogo da forca/\n");
    printf(" /***************/\n\n");
    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |               \n");
    printf(" |              \n");
    printf(" |              \n");
    printf("_|___           \n\n");
    printf("_ _ _ _ _ _ _ _ _ \n");
    printf("Qual letra?\n");

    char Letra;
    char *ptr;
    ptr=&Letra;
    scanf("%s",&Letra);//%s aponta para uma string.
    printf("%s\n",&ptr);// o mesmo da regra de cima.
    printf("%c\n",*ptr);//%c aponta para o caracter apontado.
    printf("%p\n",ptr);//%p imprime o endereço de memória.

 
 //Usar biblioteca do 
    return 0;
}