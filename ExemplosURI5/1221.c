#include <stdio.h>
#include <math.h>

double RaizdoNum(int n){
    double raiz; 
        raiz = sqrt(n);
    return raiz;    
}

int EhPrimo(int num){
    int i;
        for(i = 2; i <= RaizdoNum(num); i++){
            
            if (num % i == 0){
                return 0;
            } 
        }
    return 1;
}

int main(void){
    int tCasos;          
    int nInserido;          
    int CondPrimo;            

    scanf("%d", &tCasos);

    while(tCasos--){
        scanf("%d", &nInserido);
               
        CondPrimo = EhPrimo(nInserido);
        if(CondPrimo == 1){
            puts("Prime");
        }
        if(CondPrimo == 0){
            puts("Not Prime");
        }
    }
    return 0;
}
