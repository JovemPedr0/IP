#include <stdio.h>

#define PESO_MAIOR 6
#define PESO_MENOR 4

float NotaUnificada(float nota1, float nota2, int pesoMaior, int pesoMenor){
	float unificada;

	if (nota1 > nota2)
        unificada = (nota1*pesoMaior + nota2*pesoMenor)/(pesoMaior+pesoMenor);
    else
        unificada = (nota2*pesoMaior + nota1*pesoMenor)/(pesoMaior+pesoMenor);

    return unificada;
}

int main(void){
    float teorica, pratica, nota;

    printf("Digite a nota teorica: ");
    scanf("%f", &teorica);
    printf("Digite a nota pratica: ");
    scanf("%f", &pratica);

    nota = NotaUnificada(teorica, pratica, PESO_MAIOR, PESO_MENOR);
    printf("Sua nota unificada eh: %.1f\n", nota);
    return 0;
}

