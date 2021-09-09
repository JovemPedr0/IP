/**
 ============================================================================
 Nome      : media.c
 Autor     : Pedro Lucas Valeriano de Mira
 Matricula : 20200015969
 Descricao : O programa calcula media com o tipo de variavel static que se mantém após a execução do programa.
 ============================================================================
*/

#include <stdio.h>

double AdicioneNaMedia(double valor){
    static double media = 0;
    static double soma;         // Variaveis definidas como static, implicando que não serão deletadas após uma execução da função.    
    static int contador = 0;

    contador++; ;// Contador para auxiliar no calculo da media.
    soma += valor; // Valores inseridos vão sendo somados entre si.
    media = soma / contador;

    return media;// retorna o valor da variavel media.
}


int main(){
    double nValores, Notas, Media;

    printf("Digite quantos valores: ");
    scanf("%lf", &nValores);     // Aqui o Usuário digita quantas notar serão inseridas

    while (nValores--){// Valor vai sendo decrementado até chegar em zero.
        scanf("%lf", &Notas);
        Media = AdicioneNaMedia(Notas);// Chamada da função que vai somando todos os valores inseridos e calcula a media deles
        printf("Media foi= %.2lf", Media);
    }
    
    
    return 0;
}