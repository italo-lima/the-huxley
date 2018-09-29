#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[10];
    int x, i, cont=0;
    
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    for(i=0; i<10; i++){
            if(x==num[i])
            cont++;
        }
    printf("%d", cont);
	return 0;
}