#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char resp[5];
    int i=0, cont=0;
    
    while(i<5){
        scanf("%s", resp);
        if(strcasecmp(resp,"true")==0){
        cont++;}
        i++;
        }
       printf("Telefonou para a vitima?\n");
       printf("Esteve no local do crime?\n");
       printf("Mora perto da vitima?\n");
       printf("Devia para a vitima?\n");
       printf("Ja trabalhou com a vitima?\n");
    if(cont<2){
        printf("Inocente");
    } else if(cont==2){
        printf("Suspeita");
    } else if(cont<=4){
        printf("Cumplice");
    } else if(cont==5){
        printf("Assassino");
    }
    
    
	return 0;
}