#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ano;
    
    scanf("%i", &ano);
    if((ano%4==0) && (ano%100!=0)){
         printf("BISSEXTO");
    } else if (ano%400==0){
        printf("BISSEXTO");
    } else {
        printf("NAOBISSEXTO");
    }
	return 0;
}