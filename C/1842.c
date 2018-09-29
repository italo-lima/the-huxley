#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float distancia(float xa, float ya, float xb,float yb){
    return sqrt(pow((xb-xa),2) + pow((yb-ya),2));
}

int main() {
    int i, qtd;
    float xa,xb,ya,yb;
    
    scanf("%d", &qtd);
    
    for(i=0; i<qtd; i++){
        scanf("%f%f%f%f", &xa,&ya,&xb,&yb);
        printf("%.2f\n", distancia(xa,ya,xb,yb));
    }
	return 0;
}