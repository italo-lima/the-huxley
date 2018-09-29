#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, cont=0;
    
    scanf("%d", &x);
    
    while(x<260){
        if(x<260){
            x = x+ 24;
            cont++;
        }
    }
    
    if(x>260){
    printf("%d", cont-1);
    } else {
        printf("%d", cont);
    }
	return 0;
}