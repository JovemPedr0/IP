#include <stdio.h>

int main(void){
    int idade;

    puts("BEM VINDO!\n\n");

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if( idade < 12){
         puts("crianca");
    }

    else if( idade <= 18){
        puts("Adolescente");
    }
    else if(idade > 18 && idade <= 30){
        puts("Jovem");
    }
    else if(idade > 30 && idade <= 60){
        puts("Adulto");
    }
    else if(idade > 60 && idade < 100){
        puts("Idoso");
    }


    return 0;
}
