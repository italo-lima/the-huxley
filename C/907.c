#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arred(float num){
    int x = num * 100.0;
    if(x%10==0){
       return printf("%.1f\n", num);
    } else {
       return printf("%.2f\n", num);
    }
}

int main() {
    int i;
    float num[30];
    
    for(i=0; i<30; i++){
        printf("Digite um numero:\n");
        scanf("%f", &num[i]);
    }
    
    for(i=1; i<30; i=i+2){
        arred(num[i]);
    }
	return 0;
}