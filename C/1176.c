#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ataque[6], defesa[6];
    
    scanf("%s", ataque);
    scanf("%s", defesa);
    
    if((strcasecmp(ataque,"planta")==0) && (strcasecmp(defesa,"planta")==0)){
        printf("Empate");
    } else if((strcasecmp(ataque,"planta")==0) && (strcasecmp(defesa,"fogo")==0)){
        printf("Desvantagem");
    } else if((strcasecmp(ataque,"planta")==0) && (strcasecmp(defesa,"agua")==0)){
        printf("Vantagem");
    } else if((strcasecmp(ataque,"fogo")==0) && (strcasecmp(defesa,"planta")==0)){
       printf("Vantagem");
    } else if((strcasecmp(ataque,"fogo")==0) && (strcasecmp(defesa,"fogo")==0)){
        printf("Empate");
    } else if((strcasecmp(ataque,"fogo")==0) && (strcasecmp(defesa,"agua")==0)){
        printf("Desvantagem");
    } else if((strcasecmp(ataque,"agua")==0) && (strcasecmp(defesa,"planta")==0)){
        printf("Desvantagem");
    } else if((strcasecmp(ataque,"agua")==0) && (strcasecmp(defesa,"fogo")==0)){
        printf("Vantagem");
    } else if((strcasecmp(ataque,"agua")==0) && (strcasecmp(defesa,"agua")==0)){
        printf("Empate");
    }
	return 0;
}