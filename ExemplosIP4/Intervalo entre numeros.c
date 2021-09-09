#include <stdio.h>

int main(void){
    int v1, v2;

    printf("Insira os valores:");
    scanf("%d%d", &v1, &v2);

    if(v1 == v2){
       puts("Os valores sao iguais");
    }
    if (v1 > v2){
        while(v1 >= v2){
            printf("%d\n", v2);
            v2 = v2 + 1;
        }
    }
    if (v2 > v1){
        while(v2 >= v1){
            printf("%d\n", v1);
            v1 = v1 + 1;
        }
    }


    return 0;
}
