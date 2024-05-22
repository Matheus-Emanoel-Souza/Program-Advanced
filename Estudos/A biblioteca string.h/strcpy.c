//strcpy

#include <stdio.h>
#include <string.h> //necessário para strcpy
#include <conio.h>
int main (void)
{
  char nome[15];
  
  strcpy(nome, "Fulano de Tal");
  //strcpy(string_destino, string_origem);
  //note que a string de destino é nome
  //a string de origem é "Fulano de Tal"
  
  printf("Nome = %s", nome);
  
  getch();
  return 0;
}

int main2 (void)
{
  char str1[8] = "Curso C";
  char str2[5];
  
  strncpy(str2, str1, 5);
  
  str2[5] = '\0';
  printf("str2 = %s\n", str2);
  
  getch();
  return 0;
}

int main3 (void)
{
  char str[10] = "Curso";
  strcat(str, " de C");
  //Concatena a string " de C" com o conteúdo da string str
  
  printf("str = %s\n", str);
  //Será exibido curso de C
  
  getch();
  return 0;
}

