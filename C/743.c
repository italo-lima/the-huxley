#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[10], maior=-9999999, i;
    
   // scanf("%d", &num[0]);
  //  maior = num[0];
    
    for(i=0; i<10;i++){
        scanf("%d", &num[i]);
        if(num[i]>maior){
            maior = num[i];
        }
    }
    printf("%d", maior);
	return 0;
}