#include <stdio.h>

double vGolpe(int atk, int def, int nivel, int bonus){
    double golpe;
        golpe = (atk + def )/ 2;
        golpe += (nivel % 2 == 0) ? bonus : 0;
    return golpe;

}

int main(){
    int teste, bonus;
    int atkDabriel, defDabriel, nivelDabriel, golpeDabriel, atkGuarte, defGuarte, nivelGuarte, golpeGuarte;

    scanf("%d", &teste);
    
    while (teste--){

        scanf("%d", &bonus);
        scanf("%d %d %d", &atkDabriel, &defDabriel, &nivelDabriel);
        scanf("%d %d %d", &atkGuarte, &defGuarte, &nivelGuarte);

        golpeDabriel = vGolpe(atkDabriel, defDabriel, nivelDabriel, bonus);
        golpeGuarte = vGolpe(atkGuarte, defGuarte, nivelGuarte, bonus);

        if(golpeGuarte == golpeDabriel){
            puts("Empate");
        }
        if(golpeDabriel > golpeGuarte){
            puts("Dabriel");
        }
        if (golpeGuarte > golpeDabriel){
            puts("Guarte");
        }
        
    }
    


}