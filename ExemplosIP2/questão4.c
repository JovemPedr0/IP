#include <stdio.h>

int main(void){
    int x,y,z;

    puts("Bem vindo ao Comparatron3.0!\n");

    printf("Por favor insira o valor de x:");
    scanf("%d", &x);

    printf("Por favor insira o valor de y:");
    scanf("%d", &y);

    printf("Por favor insira o valor de z:");
    scanf("%d", &z);

    if(x > y){
        puts("X maior que todos");
    }else{ if(x > z){
            puts("X maior que todos");
                }else{ if(y > z){
                    puts("Y maior que todos");
                    }else {
                        puts("Z maior que todos");
                    }

                }
    }




    return 0;
}
