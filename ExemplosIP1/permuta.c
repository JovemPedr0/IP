#include <stdio.h>

int main(void){
    int a, b;
    int x;

	/* a entrada de dados nao pode ser alterada */
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	/* esse printf nao pode ser alterado nem removido. */
    printf("\nos valores lidos para a e b foram: %d e %d\n", a, b);

    x=a;
    a=b;
    b=x;

	/* esse printf nao pode ser alterado nem removido e nada pode ser alterado apos ele. */
    printf("\nos novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
