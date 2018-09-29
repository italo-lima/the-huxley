#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=1, num, maior=0, menor=1000000;
    
    while(i!=0){
        scanf("%d", &num);
        if((i==1) && (num==0)){
            menor = 0;
            break;
        }
        if(num==0){
            break;
        }
        if(num>maior){
            maior = num;
        }
        if(num<menor){
            menor = num;
        }
        i++;
    }
    
    printf("%d %d", menor, maior);
	return 0;
}