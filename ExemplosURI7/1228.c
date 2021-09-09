#include <stdio.h>

int main(){
    int casos, qtdCompetidores, i, j, aux, ultrapassagens = 0, trocas = 0;
    int largada[24] = {0}, chegada[24] = {0}, copiaChegada[24] = {0};

    scanf("%d", &qtdCompetidores);

    for(i = 0; i < qtdCompetidores; i++){
        scanf("%d", &largada[i]);
    }
    for(j = 0; j < qtdCompetidores; j++){
        scanf("%d", &chegada[j]);
    }
    
    for (i = 0; i < qtdCompetidores - 1; i++){
        for(j = 0; j < qtdCompetidores - 1; j++){
            if (largada[i] != chegada[j]){
                aux = largada[i];
                largada[i] = largada[i+1];
                largada[i + 1] = aux; 
            }
        }    
    }

    for(i = 0; i < qtdCompetidores; i++){
        printf("[%d] = %d\n", i, largada[i]);
    }

}