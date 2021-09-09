//Escreva um programa que repita a leitura de uma senha até que ela seja válida. 
//Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". 
//Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. 
//Considere que a senha correta é o valor 2002. 
#include <stdio.h>


int main(void){
    int tsenha, senhacorreta;

    senhacorreta = 2002;

    while (tsenha != senhacorreta) {
        scanf("%d", &tsenha);

        if(tsenha != senhacorreta){
            puts("Senha Invalida");
        }
        else if(tsenha == senhacorreta){
            puts("Acesso Permitido");
        }
    }
    

    return 0;
}
