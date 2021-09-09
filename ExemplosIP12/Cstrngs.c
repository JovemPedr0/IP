#include <stdio.h>

int main (){

    size_t tamanhoChar = sizeof((char) 'A');
    size_t tamanhoStr = sizeof("A");

    printf("tamanhoc char = %d\n"
            "tamanho str = %d\n", tamanhoChar, tamanhoStr);

    return 0;
}