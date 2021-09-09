#include <stdio.h>

long long int Fibonnaci(long long int n){
    long long int j, anterior = 0, sucessor = 1, c;

        for (j = 0; j < n; j++){
            if(j <= 1){
                c = j;
            }
            else{
                c = anterior + sucessor;
                anterior = sucessor;
                sucessor = c; 
            }
        }
    return c;
}


int main(){
    int nCasos, i;
    long long int numero;

    scanf("%d", &nCasos);

    for (i = 1; i <= nCasos; i++){
        scanf("%lld", &numero);
        numero = numero + 1;
        printf("Fib(%lld) = %lld\n", numero - 1, Fibonnaci(numero));
    }
    

    return 0;
}