int main (){
    int i, nCasos, Multiplos2=0, Multiplos3=0, Multiplos4=0, Multiplos5=0;

    scanf("%d", &nCasos);

    int Array[nCasos];

    for (i = 0; i < nCasos; i++){
        scanf("%d", &Array[i]);
    }
    /* for (i = 0; i < nCasos; i++){
        printf("[%d] = %d\n", i, Array[i]);
    } */
    
    
    for (i = 0; i < nCasos; i++){
        if(Array[i] % 2 == 0){
           Multiplos2++;
        }
        if(Array[i] % 3 == 0){
            Multiplos3++;
        }
        if(Array[i] % 4 == 0){
            Multiplos4++;
        }
        if(Array[i] % 5 == 0){
            Multiplos5++;
        }
            
    }
    printf("%d Multiplo(s) de 2\n", Multiplos2);
    printf("%d Multiplo(s) de 3\n", Multiplos3);
    printf("%d Multiplo(s) de 4\n", Multiplos4);
    printf("%d Multiplo(s) de 5\n", Multiplos5);

    return 0;
}