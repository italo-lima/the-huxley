#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[5], i,j, aux;
    
    for(i=0; i<5; i++){
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
             if(num[i]>num[j]){
             aux = num[i];
             num[i] = num[j];
             num[j] = aux;
             }
        }
    }
    
        printf("%d\n%d\n%d", num[0], num[2], num[4]);
	return 0;
}