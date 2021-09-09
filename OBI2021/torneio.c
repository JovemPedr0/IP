#include <stdio.h>

#define MAX_JOGOS 6

int main(){
    char cJogos;
    int maxJogs = 6;
    int venceu = 0;

    while(maxJogs--){
        scanf("%c%*c", &cJogos);
        if(cJogos == 'V'){
            venceu++;
        }
    }

    if(venceu == 5 || venceu == 6){
        puts("1");
    }else if(venceu == 3 || venceu == 4){
        puts("2");
    }else if(venceu == 1 || venceu == 2){
        puts("3");
    }else if(venceu == 0){
        puts("-1");
    }
    

}



/*
participantes que venceram 5 ou 6 jogos serão colocados no Grupo 1;
•participantes que venceram 3 ou 4 jogos serão colocados no Grupo 2;
•participantes que venceram 1 ou 2 jogos serão colocados no Grupo 3;
•participantes que não venceram nenhum jogo não serão convidados a continuar com os treina-mentos.
*/