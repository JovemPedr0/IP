#include <stdio.h>

int main (){
    int n=1, i, resultado, v1,v2, esq=0, dir=0;

    while (n > 0){
        scanf("%d", &n);
        
        if (n==0)break;

        esq=0;
        dir=0;
        for ( i = 0; i < n; i++){
            scanf("%d %d", &v1, &v2);
            if (v1 > v2){
                esq++;
            }
            else if(v2 > v1){
                dir++;
            }
        }
        
        printf("%d %d\n", esq, dir);
    }
    if(v1 == v2 && v1!=0 && v2!=0){
        puts("0 0");
    }    

    return 0;
}