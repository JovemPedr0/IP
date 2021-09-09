#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador;

	srand(time(NULL));
	correto = rand() % 100;
    contador = 0;
	palpite = -1;


	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        contador = contador + 1;
            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
            if (contador >= 5){
                puts("Fim de Jogo!\n");
                return 1;
            }
            if (contador == 1){
                puts("Primeira Tentativa!\n");
            }
            if (contador == 2){
                puts("Segunda Tentativa!\n");
            }
            if (contador == 3){
                puts("Terceira Tentativa!\n");
            }
            if (contador == 4){
                puts("Quarta Tentativa!\n");
            }


	}

    puts("Voce acertou!\n");
	printf("Voce tentou: %d vezes.\n", contador);
	return 0;
}
