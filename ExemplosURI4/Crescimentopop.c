#include <stdio.h>
 
int main() {
    
    /* test to cases to be inserted and p's to population and tx's for rates and years to years.
    always p1 with tx and p2 with ty*/

    int test; 
    int p1, p2;
    int years=0;
    double tx, ty;

    scanf("%d", &test);

    while (test--){
        scanf("%d %d %lf %lf", &p1, &p2, &tx, &ty);
        
        years = 0;
        while (p1 <= p2){
            years++;
            p1 = p1*(1.0+tx/100);
            p2 = p2*(1.0+ty/100);

            if(years > 100) break;
        }
        
        if(years > 100){
            printf("Mais de 1 seculo.\n");

        }else if(years <= 100){
            printf("%d anos.\n", years);
        }
    }
        
        
        
 
    return 0;
}