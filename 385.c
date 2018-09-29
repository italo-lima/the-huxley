#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int id, i=0, x;
    float cre, somaC=0, menor=99999;
    
    while(i>=0){
        scanf("%d", &id);
        if(id==999){
            break;
        } else {
        scanf("%f", &cre);
        if(cre<menor){
            menor = cre;
            x = id;
        }
        somaC = somaC + cre;
        }
        i++;
    }
    printf("%d\n", x);
    if(i==0){
        printf("0.00");
    } else {
    printf("%.2f", somaC/(float)i);
    }
	return 0;
}