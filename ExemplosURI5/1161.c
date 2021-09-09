#include <stdio.h>

unsigned long long Fatorial(int numero){
    unsigned long long fat = 1;
    int i;

        for ( i = 1; i <= numero; i++){
            fat = fat * i;
        }
    return fat;
}

int main(){
    int m, n, q;

    while(scanf("%d %d", &m, &n) != EOF){
        printf("%llu\n", Fatorial(m) + Fatorial(n));
    }

    return 0;
}
