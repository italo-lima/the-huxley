#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, i;
    
    for(i=0; ; i++){
        if(num<0){
            break;
        } else {
        scanf("%d", &num);
        printf("%d\n", num);
        }
    }
	return 0;
}