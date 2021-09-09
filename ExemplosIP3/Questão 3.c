#include <stdio.h>

int main(void){
    float nota1, nota2, nota3;
    float notax, notay, notaz;
    float media1, media2, media3;
    float mediatotal;

    puts("Bem vindo aluno!\n\n");

    printf("Digite sua primeira nota da disciplina de INEC:");
    scanf("%f", &nota1);
    printf("Digite sua primeira nota da disciplina de LABIP:");
    scanf("%f", &notax);

    if(nota1 > notax){
        media1 = ((6*nota1)+(4*notax))/ 10;
        printf("media1:(%.1f)\n\n", media1);
    }
    else{
        media1 = ((6*notax)+(4*nota1))/ 10;
        printf("media1:(%.1f)\n\n", media1);
    }

    printf("Digite sua segunda nota da disciplina de INEC:");
    scanf("%f", &nota2);
    printf("Digite sua segunda nota da disciplina de LABIP:");
    scanf("%f", &notay);

    if(nota2 > notay){
        media2 = ((6*nota2)+(4*notay))/ 10;
        printf("media2:(%.1f)\n\n", media2);

    }
    else{
        media2 = ((6*notay)+(4*nota2))/ 10;
        printf("media2(%.1f)\n\n", media2);
    }

    printf("Digite sua terceira nota da disciplina de INEC:");
    scanf("%f", &nota3);
    printf("Digite sua terceira nota da disciplina de LABIP:");
    scanf("%f", &notaz);


    if(nota3 > notaz){
        media3 = ((6*nota3)+(4*notaz))/ 10;
        printf("media3:(%.1f)\n\n", media3);
    }
    else{
        media3 = ((6*notaz)+(4*nota3))/ 10;
        printf("media3(%.1f)\n\n", media3);
    }

    mediatotal = (media1+media2+media3)/3;
    printf("mediatotal(%.1f)\nConceito:", mediatotal);

    if (mediatotal <= 5){
        puts("F");
    }
    else if(mediatotal < 6){
        puts("E");
    }
    else if (mediatotal < 7){
        puts("D");
    }
    else if(mediatotal < 8){
        puts("C");
    }
    else if(mediatotal < 9){
        puts("B");
    }
    else if (mediatotal <= 10){
        puts("A");
    }else{
        puts("Desconhecido");
    }



    return 0;
}
