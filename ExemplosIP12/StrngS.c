#include <stdio.h>

int main(){
    char str[] = "corona";
    int tamanhoStr, tamanhoElem;

    tamanhoStr = sizeof(str);
    tamanhoElem = sizeof (str[0]);

    printf("Tamanho do array: %d\n", tamanhoStr/tamanhoElem);

    return 0;
}