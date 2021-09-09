#include<stdlib.h>
#include<stdio.h>

float Average(float nota1, float nota2){
    return (nota1+nota2)/2;
}

int main (){
    float nota1, nota2, media;

    scanf("%f%f", &nota1, &nota2);
    
    media = Average(nota1, nota2);
    printf("media = %.2f", media);
}