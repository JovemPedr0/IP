#include <stdio.h>

int Rafael(int x, int y){
    return (3*x*3*x) + y*y;
}

int Beto(int x, int y){
    return 2*(x*x) + (5*y*5*y);
}
int Carlos (int x, int y){
    return -100*x + y*y*y;
}

int main(){
    int tentativas, x, y;
    int rafael, beto, carlos;

    scanf("%d", &tentativas);

    while (tentativas--){
        scanf("%d %d", &x, &y);

        rafael = Rafael(x, y);
        beto = Beto(x, y);
        carlos = Carlos(x,y); 

        if(rafael > beto && rafael > carlos){
            puts("Rafael ganhou");
        }
        if(beto > rafael && beto > carlos){
            puts("Beto ganhou");
        }
        if(carlos > beto && carlos > rafael){
            puts("Carlos ganhou");
        }
    }
    


    return 0;
}