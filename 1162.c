#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char ataque[6], defesa[6];
    int retorno;
    
    scanf("%s", ataque);
    scanf("%s", defesa);
    
    if(strcmp(ataque,defesa)!=0){
            if((strcmp(ataque,"Planta")==0) && (strcmp(defesa,"Fogo")==0)){
            printf("Desvantagem");
        }else if((strcmp(ataque,"Planta")==0) && (strcmp(defesa,"Agua")==0)){
            printf("Vantagem");
        }else if((strcmp(ataque,"Fogo")==0) && (strcmp(defesa,"Planta")==0)){
             printf("Vantagem"); 
        }else if((strcmp(ataque,"Fogo")==0) && (strcmp(defesa,"Agua")==0)){
            printf("Desvantagem");
        }else if((strcmp(ataque,"Agua")==0) && (strcmp(defesa,"Fogo")==0)){
            printf("Vantagem");
        }else if((strcmp(ataque,"Agua")==0) && (strcmp(defesa,"Planta")==0)){
            printf("Desvantagem");
        }
    } else if(strcmp(ataque,defesa) ==0){
            printf("Empate");
    }
    
	return 0;
}