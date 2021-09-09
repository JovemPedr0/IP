#include <stdio.h>

int RetornaCaracteresRepetidos(const char *str, char procurado){
    int contC = 0;
    int i;
        for(i = 0; str[i] != '\0'; i++){
            if(str[i] == procurado){
                contC++;
            }
        }
    return contC;
}

int ContaPalavras(const char *str){
    return RetornaCaracteresRepetidos(str, ' ') + 1;
}


int main(){
    char str1[] = "bolo e coca";
    int nPalavras = 0;

    nPalavras = ContaPalavras(str1);
    printf("Na String \"%s\" tem %d palavras\n", str1, nPalavras);

    return 0;
}