#include <stdio.h>
#include <string.h>

int main(){
    int nJogos, i;
    char jSheldon[10], jRaj[10];
    int cont = 0;

    scanf("%d%*c", &nJogos);

    while (nJogos--){
        scanf("%s %s", jSheldon, jRaj);

        cont++;
        if (strcmp(jSheldon, jRaj) == 0){
            printf("Caso #%d: De novo!\n", cont);
        }else if (strcmp(jSheldon, "Spock") == 0 && strcmp(jRaj, "pedra") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "lagarto") == 0 && strcmp(jRaj, "Spock") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "tesoura") == 0 && strcmp(jRaj, "lagarto") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "papel") == 0 && strcmp(jRaj, "Spock") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "tesoura") == 0 && strcmp(jRaj, "papel") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "papel") == 0 && strcmp(jRaj, "pedra") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "lagarto") == 0 && strcmp(jRaj, "papel") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "pedra") == 0 && strcmp(jRaj, "lagarto") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "Spock") == 0 && strcmp(jRaj, "tesoura") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else if (strcmp(jSheldon, "pedra") == 0 && strcmp(jRaj, "tesoura") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }else{
            printf("Caso #%d: Raj trapaceou!\n", cont);
        }
            
    }

    
    return 0;
}

/*   
    a tesoura corta o papel; t > pa
    o papel embrulha a pedra; pa > pe
    a pedra esmaga o lagarto; pe > lar
    o lagarto envenena Spock; lar > spo
    Spock destrói a tesoura; spo > t
    a tesoura decapita o lagarto; t > lar
    o lagarto come o papel; lar > pa
    o papel contesta Spock; pa > sp
    Spock vaporiza a pedra; sp > ped
    a pedra quebra a tesoura. pe > t
*/    