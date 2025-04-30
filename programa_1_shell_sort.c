#include <stdio.h>

// Fun��o para ordenar usando Shell Sort
void shellSort(int v[], int tamanho) {
    int i, j, valor, gap;

    gap = tamanho / 2;

    // Enquanto o gap for maior que zero
    while (gap > 0) {
        // Percorre o vetor a partir do �ndice gap at� o final
        for (i = gap; i < tamanho; i++) {
            valor = v[i];  // Salva o valor atual que ser� reposicionado
            j = i;

            // Compara e desloca os elementos que est�o a 'gap' posi��es antes
            while (j >= gap && v[j - gap] > valor) {
                v[j] = v[j - gap];  // Move o valor maior para frente
                j = j - gap;        // Atualiza o �ndice j para continuar a verifica��o
            }

            v[j] = valor;  // Insere o valor na posi��o correta
        }

        gap = gap / 2;  // Diminui o gap pela metade
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

    shellSort(vetor, 6);    // Ordena o vetor usando Shell Sort

    printf("Vetor ordenado com Shell Sort:\n");
    exibirVetor(vetor, 6);  // Mostra vetor j� ordenado

    return 0;
}

