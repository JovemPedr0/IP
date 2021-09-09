#include <stdio.h>

int main (){
    int t, p, i;
    int contador=0;

    scanf("%d", &t);
    for (i = 0; i < 5; i++){
        scanf("%d", &p);
        if (p==t){
            contador++;
        }
    }
    
    printf("%d\n", contador);

    return 0;
}