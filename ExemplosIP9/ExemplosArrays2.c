#include <stdio.h>

#define N_ALUNOS 50

int main(){
    double notaAluno[N_ALUNOS], media, soma;
    int i;

    for(i = 0; i < N_ALUNOS; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &notaAluno[i]);
    }

    soma = 0;
    for(i = 0; i < N_ALUNOS; i++){
        soma = soma + notaAluno[i];
    }
    media = soma/N_ALUNOS;

    return 0;
}