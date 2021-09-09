#include <stdio.h>

int RetornaTamanho(const char *str) {
    int t = 0, i;

    for(i = 0; str[i] != '\0'; i++){
        t++;
    }

    return t;
}

int main(){
    char str1[] = "Pedro Lucas";
    int tamanhostring = RetornaTamanho(str1);

    printf("A string %s tem tamanho de %d\ caractere(s)", str1,tamanhostring);
 
    return 0;
}
