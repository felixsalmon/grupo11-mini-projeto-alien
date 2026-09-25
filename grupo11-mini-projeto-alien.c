#include <stdio.h>

#define N 10000

int calctamanho(const char palavra[]) {

    //char palavra[N];
    int tamanho = 0;

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

void inverter(const char palavra[]) {
    int tamanho = calctamanho(palavra);
    int i;
    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
}

int main(){
    char palavra[N];
    scanf("%[^\n]%*c", palavra);
    
    int tamanho = calctamanho(palavra); //funcao de calcular tamanho da palavra
    inverter(palavra); //funcao de inverter a palavra

    return 0;
}