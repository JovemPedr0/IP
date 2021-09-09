#include <stdio.h>

int main(void){

    float nota1, nota2, nota3;
    float media;

        printf("Digite o valor da nota1:");
        scanf("%f", &nota1);
        printf("Digite o valor da nota2:");
        scanf("%f", &nota2);
        printf("Digite o valor da sua nota3:");
        scanf("%f", &nota3);


        media = (nota1+nota2+nota3)/3;

        printf("media (%.1f)\n", media);

    if(media > 9){
        printf("Congratulations");
    }



    return 0;
}
