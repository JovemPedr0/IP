#include<stdio.h>
#include<stdlib.h>

void MaybeSayHW(){
    printf("Hello World!\n");
    return 0;
}
void MaybeSay(){
    printf("I dont want talk!\n");
    return 1;
}

int main(){
    char resposta;
    
    scanf("%c", &resposta);

    if(resposta == 's'){
        MaybeSayHW();
    }
    if(resposta == 'n'){
        MaybeSay();
    }


}