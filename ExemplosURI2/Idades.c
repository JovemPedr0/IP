//Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo.
//O último dado, que não entrará nos cálculos, contém o valor de idade negativa. 
//Calcular e imprimir a idade média deste grupo de indivíduos.

#include <stdio.h>

int main(void){
    float idade, soma, media, contador;

    scanf("%f", &idade);
    soma = 0;
    contador = 0;
    
    while (idade >= 0) {
        contador = contador + 1;
        soma = soma + idade;
        media = soma / contador;
        scanf("%f", &idade);
        
    }
    
    printf("%.2f\n", media);

    return 0;
}