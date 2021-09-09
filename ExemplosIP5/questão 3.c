#include <stdio.h>

int main(void){
    int frase1, frase2;


    for( frase1 = 1; frase1 <= 200; frase1 = frase1 + 1){
            if(frase1 % 2 == 0){
                printf("So aprende a programar quem escreve programas\n", frase1);
            }
                else{
                 printf("Quem nao escreve programas nao aprende a programar\n", frase2);
                }
    }


    return 0;
}
