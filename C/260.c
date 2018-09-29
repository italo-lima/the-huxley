#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numPrimo (int x){
    int  i, cont=0;
    
     for(i=1; i<=x; i++){
            if(x % i == 0){
                cont++;
            }
        }
        if(cont==2){
           return 1;
        } else {
           return 0;
        }
}

int main() {
    int num, i;
     
    for(i=0; ; i++){
        scanf("%d", &num);
        
        if(num<0){
            break;
        } else {
           printf("%d\n", numPrimo(num));
        }
        }
    
	return 0;
}