#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, l, c, i, quant=0;
    
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%d %d", &l, &c);
        
        if(l>c){
            quant = quant + c;
        }
    }
    printf("%d", quant);
    
	return 0;
}