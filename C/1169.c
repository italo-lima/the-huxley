#include <stdio.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h>

int main() {
    int w;
    
    scanf("%d", &w);
    
    if((w>=1) && (w<=20)){
        printf("Potencia de : %d W", 20+ (w*w*w));
    }else if((w>20) && (w<=40)){
        printf("Potencia de : %d W", 8000+ ((w-10)*(w-10)));
    } else if((w>40) && (w<=60)){
        printf("Potencia de : %d W", 9000+ (w*5));
    } else if((w>60) && (w<=80)){
        printf("Potencia de : %d W", 9300+ (w*2));
    } else if((w>80) && (w<=100)){
        printf("Potencia de : %d W", 9500 + w);
    }
	return 0;
}