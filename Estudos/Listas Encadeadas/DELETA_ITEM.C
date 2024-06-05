#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista encadeada
typedef struct Node {
    int data;             // Dado do nó
    struct Node* next;    // Ponteiro para o próximo nó
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Aloca memória para o novo nó
    newNode->data = data;    // Atribui o dado ao novo nó
    newNode->next = NULL;    // Define o próximo nó como NULL
    return newNode;          // Retorna o novo nó
}

// Função para adicionar um nó no final da lista
void append(Node** head, int data) {
    Node* newNode = createNode(data); // Cria um novo nó
    if (*head == NULL) {
        *head = newNode; // Se a lista estiver vazia, o novo nó se torna o cabeça
        return;
    }
    Node* temp = *head;  // Ponteiro temporário para percorrer a lista
    while (temp->next != NULL) {
        temp = temp->next; // Percorre a lista até o último nó
    }
    temp->next = newNode; // Adiciona o novo nó no final da lista
}

// Função para deletar um nó com um valor específico
void deleteNode(Node** head, int key) {
    Node* temp = *head; // Ponteiro temporário para percorrer a lista
    Node* prev = NULL;  // Ponteiro para manter o nó anterior

    // Se a cabeça contém o valor a ser deletado
    if (temp != NULL && temp->data == key) {
        *head = temp->next; // Muda a cabeça
        free(temp);         // Libera a memória da antiga cabeça
        return;
    }

    // Procura pelo nó a ser deletado, mantendo o nó anterior
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Se o valor não foi encontrado na lista
    if (temp == NULL) return;

    // Desconecta o nó da lista
    prev->next = temp->next;

    free(temp); // Libera a memória do nó
}

// Função para imprimir a lista encadeada
void printList(Node* head) {
    Node* temp = head; // Ponteiro temporário para percorrer a lista
    while (temp != NULL) {
        printf("%d -> ", temp->data); // Imprime o dado do nó
        temp = temp->next; // Move para o próximo nó
    }
    printf("NULL\n"); // Indica o final da lista
}

// Função principal
int main() {
    Node* head = NULL; // Inicializa a lista como vazia (cabeça NULL)

    // Adiciona nós à lista
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    // Imprime a lista original
    printf("Lista original: ");
    printList(head);

    // Deleta um nó
    deleteNode(&head, 3);

    // Imprime a lista após a deleção
    printf("Lista após deletar 3: ");
    printList(head);

    return 0;
}
