#include <stdio.h>

int buscaBinaria(int arr[], int baixo, int alto, int alvo) {
    while (baixo <= alto) {
        int meio = baixo + (alto - baixo) / 2;

        if (arr[meio] == alvo) {
            return meio;
        }

        if (arr[meio] < alvo) {
            baixo = meio + 1;
        } else {
            alto = meio - 1;
        }
    }
    return -1;
}

int buscaExponencial(int arr[], int n, int alvo) {
    if (arr[0] == alvo) {
        return 0;
    }

    int i = 1;
    while (i < n && arr[i] <= alvo) {
        i = i * 2;
    }

    return buscaBinaria(arr, i / 2, (i < n ? i : n - 1), alvo);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int alvo = 7;

    int resultado = buscaExponencial(arr, n, alvo);

    if (resultado != -1) {
        printf("Elemento encontrado na posição %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}
