#include <stdio.h>

// Fun��o para reorganizar o heap
void heapify(int v[], int n, int i) {
    int maior, esquerda, direita, temp;

    maior = i;              // Inicializa o maior como raiz
    esquerda = 2 * i + 1;   // Filho da esquerda = 2*i + 1
    direita  = 2 * i + 2;   // Filho da direita  = 2*i + 2

    // Se filho da esquerda existir e for maior que a raiz
    if (esquerda < n && v[esquerda] > v[maior])
        maior = esquerda;

    // Se filho da direita existir e for maior que o maior at� agora
    if (direita < n && v[direita] > v[maior])
        maior = direita;

    // Se o maior n�o for a raiz
    if (maior != i) {
        temp = v[i];
        v[i] = v[maior];
        v[maior] = temp;

        // Recursivamente reorganiza a sub�rvore afetada
        heapify(v, n, maior);
    }
}

// Fun��o para realizar Heap Sort
void heapSort(int v[], int n) {
    int i, temp;

    // Constr�i o heap (reorganiza o vetor)
    for (i = n / 2 - 1; i >= 0; i--) {
        heapify(v, n, i);
    }

    // Extrai os elementos do heap, um por um
    for (i = n - 1; i >= 0; i--) {
        // Move a raiz (maior valor) para o final do vetor
        temp = v[0];
        v[0] = v[i];
        v[i] = temp;

        // Chama heapify na �rvore reduzida
        heapify(v, i, 0);
    }
}

// Fun��o para exibir o vetor
void exibirVetor(int v[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    // Vetor com 6 n�meros inteiros aleat�rios e diferentes
    int vetor[6] = {25, 7, 12, 30, 18, 2};

    printf("Vetor original:\n");
    exibirVetor(vetor, 6);  // Mostra vetor antes de ordenar

    heapSort(vetor, 6);     // Ordena o vetor usando Heap Sort

    printf("Vetor ordenado com Heap Sort:\n");
    exibirVetor(vetor, 6);  // Mostra vetor ordenado

    return 0;
}

