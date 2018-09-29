#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if(num==1){
    printf("Nordeste");
    } else if(num==2){
    printf("Norte");
    } else if((num==3) || (num==4)){
    printf("Centro-Oeste");
    } else if(num<=9){
    printf("Sul");
    } else if(num<=15){
    printf("Sudeste");
    }
	return 0;
}