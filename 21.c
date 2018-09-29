#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int inicial, final, i;
    
    scanf("%d", &inicial);
    scanf("%d", &final);
    
    for(i=inicial; i<=final; i++){
        if(i%2==1){
            printf("%d\n", i);
        }
    }
	return 0;
}