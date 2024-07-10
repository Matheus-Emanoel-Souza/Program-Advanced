#include<stdlib.h>
#include"fonte.h"

int main()
{
    conta teste1 = {"josiane",001,2468,10000.8};
    conta teste2 = {"Rafael",003,22469,2.90};
    //conta conta1 = criaconta();
    printaSaldo(teste2);
    printaSaldo(teste1);
    printf("Fim do programa!!");
}