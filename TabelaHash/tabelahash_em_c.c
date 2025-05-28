#include <stdio.h>
#include <string.h>

// Definindo a struct Item
typedef struct {
    char* chave;
    int valor;
} Item;

// Função de busca linear
Item* busca_linear(Item* itens, size_t tamanho, const char* chave) {
    for (size_t i = 0; i < tamanho; i++) {
        if (strcmp(itens[i].chave, chave) == 0) {
            return &itens[i];
        }
    }
    return NULL; // Se não encontrar
}

int main(void) {
    // Vetor de itens
    Item itens[] = {
        {"foo", 10}, {"bar", 42}, {"bazz", 36}, {"buzz", 7},
        {"bob", 11}, {"jane", 100}, {"x", 200}
    };

    size_t quantidade_itens = sizeof(itens) / sizeof(Item);

    // Procurando pelo item "bob"
    Item* encontrado = busca_linear(itens, quantidade_itens, "bob");

    if (!encontrado) {
        printf("Item não encontrado!\n");
        return 1;
    }

    printf("Valor de 'bob' é %d\n", encontrado->valor);

    return 0;
}
