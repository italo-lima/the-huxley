#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arred (float num){
    int x = num * 100.0;
    if(x%10==0){
      printf("%.1f\n", num);
    } else {
       printf("%.2f\n", num);
    }
}

int main() {
    float num[10];
    int i;
    
    for(i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%f", &num[i]);
    }
    
    for(i=9; i>=0; i--){
       arred(num[i]);
    }
	return 0;
}