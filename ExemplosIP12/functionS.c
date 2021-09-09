#include <stdio.h>
#include <string.h>

int main(){
    char name[31];
    char copy[62];

    printf("Digite seu nome(Max 30): ");
    fgets(name, 31, stdin);
        if(name[strlen(name) - 1] == '\n'){
            name[strlen(name) - 1] = '\0';
        }   

    puts("O nome: ");
    puts(name);

    printf("Tamanho: %d\n", strlen(name));

    strcpy(copy, name);
    printf("String copiada: %s\n", copy);
}