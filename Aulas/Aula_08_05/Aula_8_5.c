#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char palavra_substituir[20];
    char nova_palavra[20];
    char nova_frase[100];

    printf("Digite uma frase: ");
    scanf("%19[^\n]%*c", frase);

    printf("Digite a palavra a ser substituída: ");
    scanf("%19s%*c", palavra_substituir);

    printf("Digite a nova palavra: ");
    scanf("%19s%*c", nova_palavra);

    int i, j;
    int frase_len = strlen(frase);
    int palavra_len = strlen(palavra_substituir);
    int nova_palavra_len = strlen(nova_palavra);

    int posicao_atual = 0;

    for (i = 0; i < frase_len; i++) {
        if (frase[i] == palavra_substituir[0]) 
        {
            int igual = 1;
            for (j = 1; j < palavra_len; j++) {
                if (frase[i + j] != palavra_substituir[j]) {
                    igual = 0;
                    break;
                }
            }
            if (igual) {
                for (j = 0; j < nova_palavra_len; j++) {
                    nova_frase[posicao_atual++] = nova_palavra[j];
                }
                i += palavra_len - 1;
            } else {
                nova_frase[posicao_atual++] = frase[i];
            }
        } else {
            nova_frase[posicao_atual++] = frase[i];
        }
    }
    nova_frase[posicao_atual] = '\0'; // Adicionando terminador nulo no final da nova frase

    printf("Frase resultante: %s\n", nova_frase);

    return 0;
}
