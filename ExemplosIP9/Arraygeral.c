#include <stdio.h>
#include <stdbool.h>

#define MAX_ARRAY 10

bool EhArrayOrdenado(int valores[], int TamanhoArray){
  int maior;

    for (int i = 0; i < TamanhoArray; i++){
            if(valores[i] > valores[i + 1]){
                return false;
            }else{
                return true;
            }
    }
}


// Adicionando a questão 5
double MaximoValorArray(int valores[], int TamanhoArray){
    int i;
    int maior = 0;
        for (i = 0; i < TamanhoArray; i++){
            if(valores[i] > maior){
                maior = valores[i];
            }    
        }
            
    return maior;    


}

// Adicionando a questão 4
bool EmArray(int valores[], int TamanhoArray, int nProcurado){
    int i;
    
        for (i = 0; i < TamanhoArray; i++){
            if(valores[i] == nProcurado){
                return true;
            }else{
                return false;
            }
        }
}

// Adicionando o que foi pedido pela questão trẽs!
double MediaArray(int valores[], int TamanhoArray){
    double soma = 0;
    int i;

        for (i = 0; i < TamanhoArray; i++){
            soma += valores[i];
        }

    return soma / TamanhoArray;
}

int main(){
    int valores[MAX_ARRAY], i, soma = 0;
    double media;

    // Adicionando o que foi pedido pela questão dois!
    for(i = 0; i < MAX_ARRAY; i++){
        printf("Digite o valor %d: ", i+1);// Aqui é inserido os valores sabendo que o maximo é 10.
        scanf("%d", &valores[i]);
    }

    printf("\n");
    printf("Agora os indices serão imprimidos de forma crescente!\n");
    soma = 0;
    for (i = 0; i < MAX_ARRAY; i++){
        printf("valores[%d] = %d\n", i, valores[i]);
        soma += valores[i];
    }

    printf("\n");
    printf("Agora os indices serão imprimidos de forma decrescente!\n");

    for (i = MAX_ARRAY - 1; i >= 0; --i){
        printf("valores[%d] = %d\n", i, valores[i]);
    }

    printf("\n");
    printf("Agora o valor na quinta posição!\n");

    printf("Valor na quinta posição[%d] = %d\n", 4, valores[4]);

    printf("\n");
    printf("Agora apenas os valores impares!\n");

    for (i = 0; i < MAX_ARRAY; i++){
        if (i % 2 != 0){
            printf("valores[%d] = %d\n", i, valores[i]);
        }    
    }

    printf("\n");
    printf("A soma dos valores contidos na array foi %d\n", soma);

    printf("\n");
    media = MediaArray(valores, MAX_ARRAY);
    printf("A media dos valores contidos na array foi %.2lf\n", media);

    int nProcurado;
    bool buscar;

    printf("Digite o valor que procura: ");
    scanf("%d", &nProcurado);
    buscar = EmArray(valores, MAX_ARRAY, nProcurado);
    if (buscar == true){
        printf("%d Localizado!\n\n", nProcurado);
    }else{
        puts("Não localizado!\n");
    }
    
    int MaiorV;

    MaiorV = MaximoValorArray(valores, MAX_ARRAY);
    printf("Maior valor eh %d\n\n", MaiorV);

    bool OrdemArray;

    OrdemArray = EhArrayOrdenado(valores, MAX_ARRAY);
    if(OrdemArray == true){
        puts("Ordenado!\n");
    }else{
        puts("Desordenado!");
    }

    return 0;
}