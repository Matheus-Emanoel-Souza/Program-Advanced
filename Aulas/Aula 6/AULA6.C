#include<stdio.h>
int main(){
int matricula = 18825610742;
int *p_mat;
int *p_outro;

p_mat = &matricula; //E comercial serve para falar que quero a posição e não o valor da variável.
//* uso pra me referênciar ao valor dentro da variável.
//& uso para me referênciar a posição.

p_outro = &matricula;

*p_mat = 99999;//*ponteiro = altero o valor pra onde ele aponta.
p_outro = &p_mat;

printf("matricula:%i",matricula);
printf("matricula:%i",*p_mat);//Não roda, *p_mat = Valor. p_mat = posição.
printf("matricula:%i",*p_outro);
printf("matricula:%p",p_outro);//[%p] = imprime o ponteiro
}

void adicionax1(int x, int b){
    b = b + x;
}
void adicionax2(int x, int b){
    *b=*b + x;
}