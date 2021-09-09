#include <stdio.h>
#include <string.h>

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    char sexo[100];
    char *resposta = "masculino";
    char *respasta = "feminino";
    float altura;
    float PesoIdeal;

    puts("Bem vindo ao PesoIdeal.com");

    printf("\tQual o seu sexo? ");

    fgets(sexo, 100, stdin);
    RemoveBarraN(sexo);

    printf("\tQual sua altura? ");
    scanf("%f", &altura);

    if(strcmp(sexo, resposta) == 0){
        PesoIdeal = (72.7*altura) - 58;
        printf("PesoIdeal:(%.2f)\n", PesoIdeal);
    }
    if(strcmp(sexo, respasta) == 0){
        PesoIdeal = (62.1*altura) - 44.7;
        printf("PesoIdeal:(%.2f)\n", PesoIdeal);
    }




    return 0;
}
