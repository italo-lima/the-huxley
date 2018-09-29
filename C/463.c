#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num=0, cont[3] = {0};
    
    while(num!=100){
        scanf("%d\n", &num);
        
        if((num>=3) && (num<=6)){
            cont[0]++;
        }
        if((num>=5) && (num<=8)){
            cont[1]++;
        }
        if((num>=5) && (num<=6)){
            cont[2]++;
        }
        }
    
    printf("%d\n%d\n%d\n", cont[0], cont[1], cont[2]);
	return 0;
}