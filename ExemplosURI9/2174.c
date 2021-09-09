#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    unsigned short nCapturados, i, j;
    int r;
    char pokemons[1000][1000];
    short nParaCapturar = 151;
    int repetidos = 0;


    scanf("%hu", &nCapturados);

    for(i = 0; i < nCapturados; i++){
        scanf("%s", pokemons[i]);
    }

    for(i = 0; i < nCapturados - 1; i++){
        for(j = nCapturados - 1; j > 0; j--){
            if(i != j){
                if(strcmp(pokemons[j], pokemons[i]) == 0){
                    repetidos++;
                    break;
                }  
            }
        }
    } 

    r = nCapturados - repetidos;

	printf("Falta(m) %d pomekon(s).\n", nParaCapturar - r); 

    return 0;
}