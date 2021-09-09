/**
    Laboratorio de Introducao a Programacao para Engenharia da Computacao.
    Atividade do dia 21 de junho de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
    printf("Insira uma descrição do tesouro(max = %d letras): ", MAX_DESCRICAO-1);
    scanf("%s", reg->descricao);

    printf("Insira uma valor estimado para o tesouro: ");
    scanf("%f", &reg->valor);

    printf("Insira as coordenadas onde o tesouro esta localizado, eixo x e eixo y: ");
    scanf("%d %d", &reg->x, &reg->y);
    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizado
    printf("Descricao do tesouro : %s\n", reg->descricao);
    printf("Valor do Tesouro: %.2lf\n", reg->valor);
    printf("Coordenadas (%d, %d)\n", reg->x, reg->y);
}

float Distancia(tRegistro *reg, int x0, int y0){
    float resultado;
	    resultado = sqrt((reg->x - x0)*(reg->x - x0) + (reg->y - y0)*(reg->y - y0));
    return resultado;
}

int main(void){
    tRegistro reg; //guarda o registro
    int opcao;
    int x0, y0;
    float d;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }

 
        switch(opcao){
            case 1:
            CadastroRegistro(&reg);
                break;

            case 2:
            ImprimeRegistro(&reg);
                break;
                
            case 3:
            printf("Insira a posicao que esta, para calcular em relacao ao tesouro: ");
            scanf("%d %d", &x0, &y0);
            d = Distancia(&reg, x0 ,y0);
            printf("%f", d);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}
