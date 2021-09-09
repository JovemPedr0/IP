#include <stdio.h>

int main(){
    long long int nEstrelas, nCarneiros = 0, i, nFazedasAtacadas = 0, j, SomaFazendas0 = 0, SomaFazendas = 0;

    scanf("%llu", &nEstrelas);

    long long int ArCa[nEstrelas];

    for (i = 0; i < nEstrelas; i++){
        scanf("%llu", &ArCa[i]);
        SomaFazendas0 += ArCa[i];
    }
    
    for (i = 0; i < nEstrelas; i++){
        if (ArCa[i] % 2 != 0){
            ArCa[i]--;
            nFazedasAtacadas = i + 1;
            SomaFazendas0--;

        }else{
           for (j = i; j >= 0; j--){
                if (ArCa[j] > 0){
                    ArCa[j]--;
                    SomaFazendas0--;
                }

            }
            nFazedasAtacadas += 1;
            break;
        }
    }  
    

    /* for (i = 0; i < nEstrelas; i++){
        printf("[%d] = %d\n", i, ArCa[i]);
    } */
    
    printf("%llu %llu\n", nFazedasAtacadas, SomaFazendas0);



    return 0;
}