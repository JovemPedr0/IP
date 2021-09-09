#include <stdio.h> 

int main (void) { 
int i, j; 
int nTestes, nViagens;
int pesoMax, pesoPresente;
int somaPeso, viagens;

    scanf("%d", &nTestes);
    while (nTestes --){
        scanf("%d %d", &nViagens, &pesoMax);
        somaPeso = 0;
        viagens = 1;
        while (nViagens--){
            scanf("%d", &pesoPresente);
            somaPeso = somaPeso + pesoPresente;
            if (somaPeso > pesoMax){
                viagens++;
                somaPeso = pesoPresente; 

            }

        }
        printf("%d\n", viagens);
    }

    return 0;
}
    

 



