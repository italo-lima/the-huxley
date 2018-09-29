#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char primeira[50];
    char segunda[50];
    
    scanf("%s\n", primeira);
    scanf("%s", segunda);
    
    if(strcmp(primeira,segunda) == 0){
        printf("IGUAIS");
    } else {
        printf("DIFERENTES");
    }
	return 0;
}