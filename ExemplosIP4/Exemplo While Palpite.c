#include <stdio.h>

int main(void){
    int palpite;

    puts("Bem-Vindo!");

    palpite = -1;
    while (palpite != 5){
        puts("Guess the number:");
        scanf("%d", &palpite);

        if (palpite == 5){
            puts("You Win!");
        }else {
            puts("Try again");
            if (palpite > 5){
                puts("Seu palpite foi alto.");
            }else{
                puts("Seu palpite foi baixo.");
            }
        }
    }


    puts("Game Over");
    return 0;
}
