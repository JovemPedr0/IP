int main (){
    int i, nCasos, ar[2001] = {0}, nInseridos;

    scanf("%d", &nCasos);
    
    for (i = 0; i < nCasos; i++){
        scanf("%d", &nInseridos);
        ar[nInseridos]++;
    }
    
    for (i = 1; i <= 2000; i++){
        if(ar[i] > 0){
            printf("%d aparece %d vez(es)\n", i, ar[i]);
        }
    }
    


    return 0;
}