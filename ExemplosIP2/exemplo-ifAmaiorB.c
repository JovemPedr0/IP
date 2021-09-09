#include <stdio.h>

int main(void){
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	if (a > b) {
        puts("a eh maior do que b.");
    } else {
        puts("b eh maior do que a.");
        printf("O valor de b era: %d\n", b);
	}


    return 0;
}
