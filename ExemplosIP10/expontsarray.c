/*
------------- QUESTÃO 1 -----------------
#include <stdio.h>

int main(){
    int a, *b, c;
    a = 5;
    b = &a;
    c = 10;

    scanf("%d", b);
    printf("%d %d\n", a, c);

    return 0;
}

---------- QUESTÃO 2 --------------
#include <stdio.h>

int main(){
    int ar[] = {1, 2, 3};
    int *p = &ar[0];

    printf("%d %d %d %d\n", ar[0], p[0], *p, *ar);

    return 0;
}

------------- QUESTÃO 3 ------------
#include <stdio.h>

int main(){
    int vetor[] = {1867, 1947, 2007};
    int *ano;
    
    ano = &vetor[0];
    ano++;

    printf("Valor: %d\n", *ano);
    (*ano)++;
    printf("Valor: %d\n", *ano);

    return 0;
}

-------------- QUESTÃO 4 ----------
#include <stdio.h>

int main(){
    int matrx[5] = {1, 2, 3, 4, 5};
    int *p;
    p = matrx;

    printf("3 elemento = %d\n", matrx[2]);

    return 0;
}

---------------- QUESTÃO 5 ---------
#include <stdio.h>

int soma(int *a, int *b){
    *a = *a + *b;
    return *a;
}

int main(){
   int x = 5, y = 3;
    
    y = soma(&x, &y);
    printf("%d\n", x+y);

    return 0;
}

-------------- QUESTÃO 6 --------------
#include <stdio.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    int *p, a, b, c, d;
    
    a = vetor[0] + vetor[4];
    p = &vetor[2];
    b = *p * 2;
    c = p[1];
    d = 2[vetor];

    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
*/