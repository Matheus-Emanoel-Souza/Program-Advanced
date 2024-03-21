#include<stdio.h>
#define NUM_PRECOS 5

float precos[NUM_PRECOS] = {1,1,1,1,1};
float precos_rotacionados[NUM_PRECOS];

    int solicitaPreco()
    {
        int idx = 0;
        do{
            printf("Digite um valor: ");
            scanf("%f",&precos[idx]);
            idx++;
        }while (idx<NUM_PRECOS&&precos[idx-1]!=-1);
        if (precos[idx-1]==-1)
        {
            idx--;
        }
        return idx;
    }

    void printVetorGlobal(int qnt_elem)
    {
        int idx = 0;
        while (idx<qnt_elem)
        {
            printf("o preco do elemento %i eh: %f\n",idx,precos[idx]);
            idx++;
        }
    }

    void rotacionaVetor()
    {
        int J = NUM_PRECOS - 1;
        for (int i = 0; i < NUM_PRECOS; i++)
        {
            precos_rotacionados[i] = precos[J];
            J--;
        }
        for (int i = 0; i < NUM_PRECOS; i++)
        {
            precos[i]=precos_rotacionados[i];
        }
    }

    int main()
    {
        printf("Vetor Original\n");
        printVetorGlobal(NUM_PRECOS);

        int qtd = solicitaPreco();

        printf("Vetor que digitamos\n");
        printVetorGlobal(qtd);

        rotacionaVetor();

        printf("vetor rotacionado\n");
        printVetorGlobal(NUM_PRECOS);
        return 0;
    }