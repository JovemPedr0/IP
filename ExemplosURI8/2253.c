#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char senha[1000];
    int tamanhoSenha, i;
    int encontreiMaiscula = 0, encontreiMiniscula = 0;
    int encontreiCaractereEsp = 0;
    int encontreiNum = 0;
    int parametroTamanho;

     while(scanf("%[^\n]%*c", senha) != EOF){ 
        
        tamanhoSenha = 0;
        encontreiMaiscula = 0;
        encontreiMiniscula = 0;
        encontreiCaractereEsp = 0;
        encontreiNum = 0;
        parametroTamanho = 1;
        
        tamanhoSenha = strlen(senha);
         
        if(tamanhoSenha < 6 || tamanhoSenha > 32){
            parametroTamanho = 0;
        }
        
         for(i = 0; senha[i] != '\0'; i++){
            if(senha[i] >= 'A' && senha[i] <= 'Z'){
                encontreiMaiscula++;
            }
        }
        for(i = 0; senha[i] != '\0'; i++){
            if(senha[i] >= 'a' && senha[i] <= 'z'){
                encontreiMiniscula++;
            }
        }
        for(i = 0; senha[i] != '\0'; i++){
            if(senha[i] >= '0' && senha[i] <= '9'){
                encontreiNum++;
            }
        }
        
        for(i = 0; senha[i] != '\0'; i++){
            if(senha[i] > 31 && senha[i] < 48 || senha[i] > 57 && senha[i] < 65 || senha[i] > 90 && senha[i] < 97 || senha [i] > 122 && senha[i] < 127){
                encontreiCaractereEsp++;
            }
        }
    
        if(parametroTamanho == 1 && encontreiMaiscula != 0 && encontreiMiniscula != 0 && encontreiNum != 0 && encontreiCaractereEsp == 0){
            printf("Senha valida.\n");
        }else{
            printf("Senha invalida.\n");
        } 
    
    } 

    return 0;
}