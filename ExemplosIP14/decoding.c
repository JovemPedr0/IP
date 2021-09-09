#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codMensagem;
    int indice; // Definição da Estrutura
    char letra;
}tLetra;

int main(){
    FILE *fp;// Ponteiro para o arquivo utilizado
    tLetra letra;// Variavel crida pela estrutura
    int contador;
    int arrayAux[10] = {0};
    char stringFrases[10][201];
    
    
    
    fp = fopen("mensagens.dat", "rb");
    if (fp == NULL) { //verificar se conseguiu abrir
        puts("Erro ao abrir o arquivo!");
        return 1;
    }
    
    while(1){
        //ler uma letra com fread
        fread(&letra.codMensagem, sizeof(letra.codMensagem), 1, fp);
        fread(&letra.indice, sizeof(letra.indice), 1, fp); // Leitura do arquivo
        fread(&letra.letra, sizeof(letra.letra), 1, fp);

        if (feof(fp) || ferror(fp)){
            break;
        } 

        fseek(fp, 3, SEEK_CUR);// Dentro do arquivo vai começar de onde foi lido com um deslocamento de 3 bytes

        if(letra.indice > arrayAux[letra.codMensagem]){ // Ordenando os indices
            arrayAux[letra.codMensagem] = letra.indice;
        }
        stringFrases[letra.codMensagem][letra.indice] = letra.letra; // Por meio do codigo e indice consigo saber a letra
    }
    //rewind(fp);
    if(fclose(fp) == 0){
        puts("Frases decodificadas com sucesso!");
    } //nao esquecer
    
    for(contador = 0; contador < 10; contador++){
        stringFrases[contador][arrayAux[contador]+1] = '\0';// Contador funciona exatamente como o codigos da mensagens, 
    }
    for (contador = 0; contador < 10; contador++){
        printf("Frase #%d : %s\n", contador + 1, stringFrases[contador]);// Contador + 1 para facilitar visualização das frases, contador acessa os indices ondes as frases estão alocadas e montadas.
    }
    

    
   
    return 0;
}
