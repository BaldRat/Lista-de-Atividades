#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int isbn;
} Livro;

int buscaBinaria(Livro livros[], int tamanho, int isbnProcurado) {
    int esquerda = 0, direita = tamanho - 1;
    
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (livros[meio].isbn == isbnProcurado) {
            return meio;
        }
        if (livros[meio].isbn < isbnProcurado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}

int main() {
    Livro biblioteca[] = {
        {"Livro A", "Autor A", 1001},
        {"Livro B", "Autor B", 1002},
        {"Livro C", "Autor C", 1003},
        {"Livro D", "Autor D", 1004},
        {"Livro E", "Autor E", 1005}
    };

    int tamanho = sizeof(biblioteca) / sizeof(biblioteca[0]);
    int isbnProcurado;

    printf("Digite o ISBN do livro que deseja procurar: ");
    scanf("%d", &isbnProcurado);

    int resultado = buscaBinaria(biblioteca, tamanho, isbnProcurado);

    if (resultado != -1) {
        printf("Livro encontrado!\n");
        printf("Título: %s\n", biblioteca[resultado].titulo);
        printf("Autor: %s\n", biblioteca[resultado].autor);
        printf("ISBN: %d\n", biblioteca[resultado].isbn);
    } else {
        printf("Livro com ISBN %d não encontrado.\n", isbnProcurado);
    }

    return 0;
}
