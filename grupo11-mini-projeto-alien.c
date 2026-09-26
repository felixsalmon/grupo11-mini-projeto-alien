#include <stdio.h>

#define N 10000

//gcc grupo11-mini-projeto-alien.c -o grupo11-mini-projeto-alien.exe
//.\grupo11-mini-projeto-alien.exe

int calctamanho(const char palavra[]) {
   int tamanho = 0;

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

void copiar(char destino[], char origem[]) {
    int i = 0;

    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }

    destino[i] = '\0';
}


//funcao 1
void inverter(char palavra[], char palavrainvertida[]) {
    int tamanho = calctamanho(palavra);
    int i;
    for(i = tamanho - 1; i >= 0; i--) {
        palavrainvertida[i] = palavra[tamanho - 1 - i];
    }
    palavrainvertida[tamanho] = '\0';
}

//funcao 2
void deslocar(char palavra[], int n, char msgdeslocada[])
{
    int i;

    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z')
        {
            if (palavra[i] == 'z')
            {
                msgdeslocada[i] = ('a' + n) - 1;
            }
            else
            {
                msgdeslocada[i] = palavra[i] + n;
            }
        }
        else if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            if (palavra[i] == 'Z')
            {
                msgdeslocada[i] = ('A' + n) - 1;
            }
            else
            {
                msgdeslocada[i] = palavra[i] + n;
            }
        }
        else if (palavra[i] >= '0' && palavra[i] <= '9')
        {
            if (palavra[i] == '9')
            {
                msgdeslocada[i] = ('0' + n) - 1;
            }
            else
            {
                msgdeslocada[i] = palavra[i] + n;
            }
        }
        else
        {
            msgdeslocada[i] = palavra[i];
        }
    }

    msgdeslocada[i] = '\0';
}

//funcao 3
void trocarParesImpares(char palavra[], char palavraimparpar[]) {
    int tamanho = calctamanho(palavra);
    int i;

    for (i = 0; i < tamanho; i += 2) {
        if (i + 1 < tamanho) {
            palavraimparpar[i] = palavra[i + 1];
            palavraimparpar[i + 1] = palavra[i];
        } else {
            palavraimparpar[i] = palavra[i];
        }
    }

    palavraimparpar[tamanho] = '\0';
}

//funcao 4
void inverterCaixa(char palavra[], char palavrainvertidacaixa[]) {

}
//funcao 5
void rotacionar(char palavra[], int n, char palavrarot[]) {
    int tamanho = calctamanho(palavra);
    int i;
    n = n % tamanho;

    for (int i = 0; i < tamanho; i++) {
        palavrarot[(i + n) % tamanho] = palavra[i];
    }

    palavrarot[tamanho] = '\0';

}
//funcao 6
void trocarMetades(char palavra[], char palavrametadetrocada[]) {

}


int main(){
    char palavra[N];
    char palavrainvertida[N];
    char msgdeslocada[N];
    char palavraimparpar[N];
    char palavrainvertidacaixa[N];
    char palavrametadetrocada[N];
    char palavrarot[N];
    char destino[N]; 
    char origem[N];
    int n = 2, opcao;
    int tamanho = calctamanho(palavra); //funcao de calcular tamanho da palavra

    scanf("%[^\n]%*c", palavra);

    while (1) {
    
    scanf("%d", &opcao);

    if (opcao == 0) break;

    switch (opcao)
    {
    case 1:
        inverter(palavra, palavrainvertida);
        copiar(palavra, palavrainvertida);
    break;

    case 2:
        scanf("%d", &n);
        deslocar(palavra, n, msgdeslocada);
        copiar(palavra, msgdeslocada);
    break;

    case 3:
        trocarParesImpares(palavra, palavraimparpar);
        copiar(palavra, palavraimparpar);
    break;

    case 4:
        inverterCaixa(palavra, palavrainvertidacaixa);
        copiar(palavra, palavrainvertidacaixa);
    break;

    case 5:
        scanf("%d", &n);
        rotacionar(palavra, n, palavrarot);
        copiar(palavra, palavrarot);
    break;

    case 6:
        trocarMetades(palavra, palavrametadetrocada);
        copiar(palavra, palavrametadetrocada);
    break;
    }
}
    printf("%s\n", palavra);

    return 0;
}