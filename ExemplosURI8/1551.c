#include <stdio.h>
#include <string.h>

int main(){
    int nCasos, i, j;
    int contador = 0;
    char frases[1005];

    scanf("%d%*c", &nCasos);
    
    while (nCasos--){

        fgets(frases, 1005, stdin);
        
        char alfabeto[27] = {'a', 'b', 'c' , 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
        
        for (i = 0; frases[i] != '\0'; i++){
            for (j = 0; j < 26; j++){
                if(frases[i] == alfabeto[j]){
                    contador++;
                    alfabeto[j] = 0;
                }
            }
        }
        //printf("%d\n", contador);
        if(contador == 26){
            puts("frase completa");
        }else if(contador >= 13){
            puts("frase quase completa");
        }else{
            puts("frase mal elaborada");
        }
        
        contador = 0;
    }
}