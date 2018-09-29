#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, i;
    
    scanf("%d\n%d", &a, &b);
    
    if(a>b){
    for(i=b; i<a; i++){
        if(i%5==2 || i%5==3)
        printf("%d\n", i);
    }
    } else {
        for(i=a; i<b; i++){
            if(i%5==2 || i%5==3)
            printf("%d\n", i);
    }
    }
	return 0;
}