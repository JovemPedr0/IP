/**
 ============================================================================
 Nome      : q3-completarFuncoes.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Exercicio para completar com definicoes de funcoes.
 ============================================================================
 */
#include <stdio.h>

int SomaAteN(int n){
    int i, soma=0;
    for (i = 0; n >= i; i++){
        soma += i;
    }
    return soma;
}

int Fatorial(int n){
    int fat;
        for (fat = 1; n > 1; n--){                
            fat = fat * n;                
        }
    return fat;
}

int EhPar(int n){
    if(n % 2 == 0){
        return 1;
    }else if (n % 2 != 0){
        return 0;
    }
}

int EhDivisivel(int n, int i){
    if(n % i == 0){
        return 1;
    }else if (n % i != 0){
        return 0;
    }
}

int main(){
    int n, i, fat, soma;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    soma = SomaAteN(n);
    printf("A soma de 1 ateh N eh: %d\n", soma);

    fat = Fatorial(n);
    printf("%d! = %d\n", n, fat);
    
    if (EhPar(n)){
        printf("%d eh par\n", n);
    }else{
        printf("%d eh impar\n", n);
    }

    for (i = 2; i <= 15; i++){
        if (EhDivisivel(n, i)){
            printf("%d eh divisivel por %d\n", n, i);
        }else{
            printf("%d nao eh divisivel por %d\n", n, i);
        }
    }

	return 0;
}

