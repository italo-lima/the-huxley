#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char dia[10], local[5];
    int i, contD=0, contL=0;
    
    for(i=0; i<11; i++){
        scanf("%s", dia);
        scanf("%s", local);
        
        if(strcasecmp(dia,"sexta")==0){
            contD++;
        }
        if(strcasecmp(local,"bar")==0){
            contL++;
        }
    }
    if(contD>=6){
        printf("SEXTA\n");
    } else {
        printf("DOMINGO\n");
    }
     if(contL>=6){
        printf("BAR");
    } else {
        printf("PRAIA");
    }
	return 0;
}