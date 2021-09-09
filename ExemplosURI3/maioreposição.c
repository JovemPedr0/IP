#include<stdio.h>

int main(){
    int cont1, cont2=0,num,maior=0, posicao;

    for(cont1=1;cont1<=100;cont1++){
        scanf("%d",&num);
        if(maior<num){
            maior=num;
            posicao=cont1;
        }
    }
    printf("%d\n%d\n",maior,posicao);
    return 0;
}