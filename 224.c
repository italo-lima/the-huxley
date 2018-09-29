#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[100];
    int i, maior=0;
    
    scanf("%d", &num[0]);
    maior = num[0];
    
    for(i=1; i<100; i++){
    scanf("%d", &num[i]);
    if(num[i]==0){
        break;
    } else {
        if(num[i]>maior){
        maior=num[i];
    }
    }
    }
    
    printf("%d", maior);
	return 0;
}