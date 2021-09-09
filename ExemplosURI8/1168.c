#include <stdio.h>
#include <string.h>

int main(){
    int nCasos, i;
    long long int contador = 0;
    char leds[102];


    scanf("%d", &nCasos);

    while (nCasos--){
        
        scanf("%s", &leds);

        for (i = 0; leds[i] != '\0'; i++){
            if(leds[i] == '0' || leds[i] == '6' || leds[i] == '9'){
                contador += 6;
            }
            if(leds[i] == '1'){
                contador += 2;
            }
            if(leds[i] == '2' || leds[i] == '3' || leds[i] == '5'){
                contador += 5;
            }
            if(leds[i] == '4'){
                contador += 4;
            }
            if(leds[i] == '7'){
                contador += 3;
            }
            if(leds[i] == '8'){
                contador += 7;
            }
        }
        printf("%llu leds\n", contador);
        contador = 0;
    }
    
    
}