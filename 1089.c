#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arred (double s){
    int x = s * 100;
    if(x%10==0){
        printf("%.1f", s);
    } else {
        printf("%.2f", s);
    }
}

int main() {
    int num, i;
    double resultado=0;
    
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        resultado = resultado + ((float)i / (float)((i*3)));
        if(i+1>num){
            printf("%d/%d", (i), (i*3));
        } else {
        printf("%d/%d + ", (i), (i*3));
        }
    }
    printf("\n");
    arred(resultado);
	return 0;
}