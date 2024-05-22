#include <stdio.h>
#include <string.h>

// Função strtok - Exemplo 1
void exemplo_strtok1() {
    char str[] = "um,dois,tres";
    char *token;

    // Primeira chamada
    token = strtok(str, ",");
    while (token != NULL) {
        printf("%s\n", token);
        // Próximas chamadas com NULL
        token = strtok(NULL, ",");
    }
}

// Função strtok - Exemplo 2
void exemplo_strtok2() {
    char str[] = "casa;carro;avião";
    char *token;

    // Primeira chamada
    token = strtok(str, ";");
    while (token != NULL) {
        printf("%s\n", token);
        // Próximas chamadas com NULL
        token = strtok(NULL, ";");
    }
}

// Função strncmp - Exemplo 1
void exemplo_strncmp1() {
    char str1[] = "abcdef";
    char str2[] = "abcxyz";

    int result = strncmp(str1, str2, 3);
    printf("Resultado strncmp Exemplo 1: %d\n", result);  // Deve ser 0 porque os três primeiros caracteres são iguais
}

// Função strncmp - Exemplo 2
void exemplo_strncmp2() {
    char str1[] = "abcdef";
    char str2[] = "abczef";

    int result = strncmp(str1, str2, 4);
    printf("Resultado strncmp Exemplo 2: %d\n", result);  // Deve ser negativo porque 'd' é menor que 'z'
}

// Função strcpy - Exemplo 1
void exemplo_strcpy1() {
    char dest[20];
    char src[] = "Olá, Mundo!";

    strcpy(dest, src);
    printf("Destino strcpy Exemplo 1: %s\n", dest);
}

// Função strcpy - Exemplo 2
void exemplo_strcpy2() {
    char dest[20];
    char src[] = "C é poderoso";

    strcpy(dest, src);
    printf("Destino strcpy Exemplo 2: %s\n", dest);
}

// Função strcmp - Exemplo 1
void exemplo_strcmp1() {
    char str1[] = "abacaxi";
    char str2[] = "abacate";

    int result = strcmp(str1, str2);
    printf("Resultado strcmp Exemplo 1: %d\n", result);  // Deve ser positivo porque 'x' é maior que 't'
}

// Função strcmp - Exemplo 2
void exemplo_strcmp2() {
    char str1[] = "casa";
    char str2[] = "casa";

    int result = strcmp(str1, str2);
    printf("Resultado strcmp Exemplo 2: %d\n", result);  // Deve ser 0 porque as strings são iguais
}

int main() {
    printf("Exemplo strtok 1:\n");
    exemplo_strtok1();
    
    printf("\nExemplo strtok 2:\n");
    exemplo_strtok2();
    
    printf("\nExemplo strncmp 1:\n");
    exemplo_strncmp1();
    
    printf("\nExemplo strncmp 2:\n");
    exemplo_strncmp2();
    
    printf("\nExemplo strcpy 1:\n");
    exemplo_strcpy1();
    
    printf("\nExemplo strcpy 2:\n");
    exemplo_strcpy2();
    
    printf("\nExemplo strcmp 1:\n");
    exemplo_strcmp1();
    
    printf("\nExemplo strcmp 2:\n");
    exemplo_strcmp2();
    
    return 0;
}
