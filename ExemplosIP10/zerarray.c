#include <stdio.h>

void ZeraArray(int ar[]/*ou *ar*/, int t){
    int i;

    for(i = 0; i < t; i++){
        ar[i] = 0;
    }

}


int main(){
    int ar[5], i;

    ZeraArray(ar, 5);
    for (i = 0; i < 5; i++){
        printf("ar[%d] = %d\n", i, ar[i]);
    }

    return 0;
}