#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, i;
    
    scanf("%d%d", &a, &b);
    
    for(i=1; i<=b; i++){
        if(i%a==0){
            printf("%d", i);
            printf("\n");
        } else {
        printf("%d ", i);
        }
    }
	return 0;
}