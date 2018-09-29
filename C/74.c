#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[101];
    int i;
    
    for(i=0; i<101; i++){
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<100; i++){
        if(num[100] == num[i]){
            int posicao = i;
            printf("%d\n", posicao);
        }
    }
	return 0;
}