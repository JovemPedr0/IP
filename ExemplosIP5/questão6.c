#include<stdio.h>
#include<math.h>

int main(){
    char progressao; // poddendo assumir o valor de a e g
    int a0, r, n; // n para quantidade de termos da progressão/ r para razão / a0 para primeiro termo
    int termo, cont=0;
    int somadostermospa=0, somadostermospg=0; // bem indutivo
    
    printf("Insira o tipo de progressao \'a\' para aritmetica e \'g\' para geometrica:" , progressao);
    scanf("%c", &progressao);

    printf("Insira o valor do primeiro termo:", a0);
    scanf("%d", &a0);

    printf("Insira o valor da razao:", r);
    scanf("%d", &r);

    printf("Insira o valor do numero de termos que deseja visualizar:", n);
    scanf("%d", &n);

    cont = 0; 

    if(progressao == 'a'){
        while (cont < n){
         termo = a0 + (cont * r);
         printf("%d\n", termo);
         cont = cont + 1;
         somadostermospa = somadostermospa + termo;;
        }
            printf("A soma dos termos foi: %d", somadostermospa);
   

    }
     if(progressao == 'g'){
        while (cont < n){
         termo = a0 * pow(r, cont);  
         printf("%d\n", termo);
         cont = cont + 1;
         somadostermospg = ((a0*(pow(r,n) - 1))/(r-1));
        }
         
        printf("A soma dos termos foi: %d", somadostermospg);
        

    }

    return 0;
}