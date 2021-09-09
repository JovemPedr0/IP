#include <stdio.h>

int main(void){
    int num1, num2, x;

    printf("Insira os valores: ");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2){
        puts("Valores iguais, nao tem intervalo");
    }
    if(num1 > num2){
        while(num1 >= num2){
            printf("%d\n", num2);
            num2 = num2 + 1;
        }
    }
    else if(num1 < num2){
        while(num1 <= num2){
            printf("%d\n", num1);
            num1 = num1 + 1;
        }
    }


    return 0;
}
