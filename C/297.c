#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int anoI, anoF, i, cont;
    
    scanf("%i", &anoI);
    scanf("%i", &anoF);
    
    for(i=anoI; i<=anoF; i++){
        if((i%4==0) && (i%100!=0) || (i%400==0)){
            printf("%i\n", i);
            cont++;
        }
    }
    if(cont==0){
        printf("-1");
    }
	return 0;
}