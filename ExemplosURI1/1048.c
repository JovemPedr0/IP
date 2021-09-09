#include <stdio.h>

int main(void){
    double salario, novosalario, reajusteganho;

    scanf("%lf", &salario);

    if(salario > 0 && salario <= 400){
        novosalario = (salario * 15/100)+ salario;
        reajusteganho = salario * 15/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\n", novosalario, reajusteganho);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario >= 400.01 && salario <= 800){
        novosalario = (salario * 12/100)+ salario;
        reajusteganho = salario * 12/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\n", novosalario, reajusteganho);
        printf("Em percentual: 12 %%\n");
    }
    else if(salario >= 800.01 && salario <= 1200){
        novosalario = (salario * 10/100)+ salario;
        reajusteganho = salario * 10/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\n", novosalario, reajusteganho);
        printf("Em percentual: 10 %%\n");
    }
    else if(salario >= 1200.01 && salario <= 2000){
        novosalario = (salario * 7/100)+ salario;
        reajusteganho = salario * 7/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\n", novosalario, reajusteganho);
        printf("Em percentual: 7 %%\n");
    }
    else if(salario > 2000){
        novosalario = (salario * 4/100)+ salario;
        reajusteganho = salario * 4/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\n", novosalario, reajusteganho);
        printf("Em percentual: 4 %%\n");
    }


    return 0;
}
