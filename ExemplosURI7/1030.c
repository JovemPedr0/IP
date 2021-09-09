#include <stdio.h>

unsigned short Viveu(unsigned short people, unsigned short salto){
    int i, viveu;

    for(i = 2; i <=people; i++){               
        viveu = (viveu + salto) % i;
    }

    return viveu;
}

int main(){
    unsigned short casos, i, j;
    unsigned short people, salto, viveu;

    scanf("%hu", &casos);

    for(i = 0; i < casos; i++){
        scanf("%hu %hu", &people, &salto);

        printf("Case %hu: %hu\n", i+1, Viveu(people, salto)+1);
    }

    return 0;
} 