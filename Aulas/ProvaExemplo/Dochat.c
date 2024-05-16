#include <stdio.h>

#define CALCULAMEDIACOR(cor) ((cor[0]+cor[1]+cor[2])/3.0)

typedef enum{
    verde,
    vermelho,
    azul
}Cores;

float Comporcor(int *cor, int intensidade, Cores cordesejada)
{
    static Cores ultima_cor_editada = vermelho;
    ultima_cor_editada = cordesejada;

    cor[cordesejada] = intensidade;

    return CALCULAMEDIACOR(cor);
}

int main()
{
    int cor_1[3]={0,0,0};
    int cor_2[3]={0,0,0};

    Comporcor(cor_1,255,azul);
    Comporcor(cor_1,255,verde);

    Comporcor(cor_2,255,vermelho);

    printf("Cor 1: R=%d, G=%d, B=%d, Média=%0.2f\n", cor_1[vermelho], cor_1[verde], cor_1[azul], CALCULAMEDIACOR(cor_1));
    printf("Cor 2: R=%d, G=%d, B=%d, Média=%0.2f\n", cor_2[vermelho], cor_2[verde], cor_2[azul], CALCULAMEDIACOR(cor_2));

    return 0;

}