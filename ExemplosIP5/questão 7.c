#include<stdio.h>

int main(){
    int num, i, soma;

    printf("Insira o valor um numero inteiro e positivo:");
    scanf("%d", &num);

    for ( i = 0; i <= 0; i++) {
        if (i % num == 0){
           soma += i ;
        } 
    }
    if(i == soma){
            printf("%d eh primo\n", num);
        }
        else{
            printf("%d nao eh primo\n", num
            );
        }
    

    return 0; 
}

//Escreva um programa em C que solicita ao usuário a entrada de um número natural
//n e informa se esse n é primo ou não. Os números primos são aqueles que são
//divisíveis apenas por 1 e eles mesmos. Esse problema é de solução simples caso sua
//ideia seja boa – pense e tente fazer sozinho.
//sugestão: A única forma de saber se um número é ou não primo é fazendo as
//divisões necessárias. Então, seu programa deve contar quantas divisões com resto
//igual a zero ocorrem ao dividir o n por todos os números do intervalo [1, n]. O
//número n será primo se apenas 2 divisores forem encontrados.]