#include <stdio.h>
#include <string.h>

// Definindo a struct
typedef struct {
    char* chave;
    int valor;
} Item;

// Função de uma busca linear
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
        {"mickeias", 13}, {"weldes", 42}, {"onibus", 36}, {"brasil", 7},
        {"tallys", 11}, {"antonio", 100}, {"metro", 200}
    };

    size_t quantidade_itens = sizeof(itens) / sizeof(Item);

    // Procurando pelo item "bob"
    Item* encontrado = busca_linear(itens, quantidade_itens, "mickeias");

    if (!encontrado) {
        printf("Item não encontrado!\n");
        return 1;
    }

    printf("Valor de 'mickeias' é %d\n", encontrado->valor);

    return 0;
}
