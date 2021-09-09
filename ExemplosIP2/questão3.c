#include <stdio.h>

int main(void){
    int a,b;

    puts("Bem vindo ao Comparatron2.0!\n");

    printf("Por favor insira o valor de a:");
    scanf("%d", &a);

    printf("Por favor insira o valor de b:");
    scanf("%d", &b);

    if(a == b){
        puts("A igual a B");
    }else{if(a > b){
        puts("A maior que B");
        printf ("O valor de A era: %d\n", a);
    }       else{
                puts("B maior que A");
                printf("O valor de B era: %d\n", b);
            }

        }






    return 0;
}
