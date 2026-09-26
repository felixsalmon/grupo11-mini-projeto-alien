#include <stdio.h>

#define N 10000



int main() {
    char palavra[N];

    scanf("%[^\n]%*c", palavra);

    int tamanho = calcularTamanho(palavra);

    printf(" %d\n", tamanho);

    return 0;
}