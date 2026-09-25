#include <stdio.h>

#define N 10000

int calctamanho(const char palavra[]) {

    int tamanho = 0;

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

void inverter(char palavra[], char palavrainvertida[]) {
    int tamanho = calctamanho(palavra);
    int i;
    for(i = tamanho - 1; i >= 0; i--) {
        palavrainvertida[i] = palavra[tamanho - 1 - i];
    }
    palavrainvertida[tamanho] = '\0';}

int main(){
    char palavra[N];
    char palavrainvertida[N];

    scanf("%[^\n]%*c", palavra);
    
    int tamanho = calctamanho(palavra); //funcao de calcular tamanho da palavra
    inverter(palavra, palavrainvertida); //funcao de inverter a palavra

    printf("%s", palavrainvertida); //imprime a palavra invertida

    return 0;
}