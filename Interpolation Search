#include <stdio.h>

int buscaInterpolacao(int arr[], int tamanho, int chave) {
    int baixo = 0;
    int alto = tamanho - 1;

    while (baixo <= alto && chave >= arr[baixo] && chave <= arr[alto]) {
        int pos = baixo + ((chave - arr[baixo]) * (alto - baixo)) / (arr[alto] - arr[baixo]);

        if (arr[pos] == chave) {
            return pos;
        }

        if (arr[pos] < chave) {
            baixo = pos + 1;
        } else {
            alto = pos - 1;
        }
    }

    return -1;
}

int main() {
    int listaUniforme[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int listaNaoUniforme[] = {2, 5, 8, 15, 24, 38, 56, 77, 99};

    int tamanhoUniforme = sizeof(listaUniforme) / sizeof(listaUniforme[0]);
    int tamanhoNaoUniforme = sizeof(listaNaoUniforme) / sizeof(listaNaoUniforme[0]);

    int chave1 = 7;
    int chave2 = 15;

    int resultado1 = buscaInterpolacao(listaUniforme, tamanhoUniforme, chave1);
    if (resultado1 != -1) {
        printf("Valor %d encontrado na posição %d da lista uniforme.\n", chave1, resultado1);
    } else {
        printf("Valor %d não encontrado na lista uniforme.\n", chave1);
    }

    int resultado2 = buscaInterpolacao(listaNaoUniforme, tamanhoNaoUniforme, chave2);
    if (resultado2 != -1) {
        printf("Valor %d encontrado na posição %d da lista não uniforme.\n", chave2, resultado2);
    } else {
        printf("Valor %d não encontrado na lista não uniforme.\n", chave2);
    }

    return 0;
}
