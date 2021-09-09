#include <stdio.h>

int main(void){
    int horas, minutos, segundos;
    int tempo;
    int resto;

    printf("Digite o tempo: ");
    scanf("%d", &tempo);

    horas = tempo/3600;
    resto = tempo % 3600;
    printf("%d horas:\n", horas);

    tempo = resto;
    minutos = tempo / 60;
    resto = tempo % 60;
    printf("%d minutos:\n",minutos);

    tempo = resto;
    segundos = resto;
    printf("%d segundos:\n", segundos);

    return 0;
}
