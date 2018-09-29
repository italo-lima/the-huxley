#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, i, cont=0;
    
    scanf("%d%d", &a, &b);
        
    for(i=1; i<50; i++){
        if((a==0) && (b==0)){
            printf("2401");
        break;
        } else if(a==0 || b==0){
        printf("0");
        break;
    } else if((i%a==0) && (i%b==0)){
            cont++;
        }
    }
    
    if((a!=0) && (b!=0)){
    printf("%d", cont);
    }
	return 0;
}