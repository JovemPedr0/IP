#include <stdio.h>
#include <string.h> 

int main(){ 
    char bacteriaCriterio[1000];
    char bacteriaTeste[1000];
    int i, j, contadorEficacia;

    while (scanf("%s %s", bacteriaCriterio, bacteriaTeste) != EOF){
        contadorEficacia = strstr(bacteriaCriterio, bacteriaTeste);

        if(contadorEficacia){
            puts("Resistente");
        }else{
            puts("Nao resistente");
        }    

    }
    
    return 0;
}