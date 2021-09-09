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

int main(){
    char str1[] = "bolo";
    int ncRepetidos = RetornaCaracteresRepetidos(str1, 'o');

    printf("O caractere 'o' repetiu-se %d vez(es) em %s\n", ncRepetidos, str1);

    return 0;
}