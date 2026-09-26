#include <stdio.h>

#define N 10000

int calcularTamanho(const char palavra[]) {

    //char palavra[N];
    int tamanho = 0;

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

int main() {
    char palavra[N];

    scanf("%[^\n]%*c", palavra);

    int tamanho = calcularTamanho(palavra);

    printf(" %d\n", tamanho);

    return 0;
}