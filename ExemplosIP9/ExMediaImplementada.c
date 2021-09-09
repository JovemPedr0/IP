#include <stdio.h>
#include <math.h>

#define MAX_ALUNOS 50

double MediaGeral(double nota[], int TamanhoArray){
    double soma = 0;
    int i;

        for (i = 0; i < TamanhoArray; i++){
            soma += nota[i];
        }


    return soma / TamanhoArray;
}

double Variancia(double nota[], int TamanhoArray){
    double media = MediaGeral(nota, TamanhoArray), soma = 0;
    int i;

        for (size_t i = 0; i < TamanhoArray; i++){
            soma += pow(nota[i] - media, 2);
        }

    return soma / TamanhoArray;    
}

double DesvioPadrao(double nota[], int TamanhoArray){

    return sqrt(Variancia(nota, TamanhoArray));

}

int main(){
    double nota[MAX_ALUNOS], media, variancia, desvioPadrao;
    int Quantidade, i;

    printf("Digite quantidade de alunos(maximo de %d): " , MAX_ALUNOS);
    scanf("%d", &Quantidade);

    for (i = 0; i < Quantidade; i++){
        printf("Digite a nota do aluno #%d: ", i+1);
        scanf("%lf", &nota[i]);
    }

    media = MediaGeral(nota, Quantidade); 
    variancia = Variancia(nota, Quantidade);
    desvioPadrao = DesvioPadrao(nota, Quantidade); 

    printf("A media das notas eh : %.1lf\n", media);
    printf("A variancia das notas eh : %.1lf\n", variancia);
    printf("O desvio padrao das notas eh : %.1lf\n", desvioPadrao);
 
    return 0;
}