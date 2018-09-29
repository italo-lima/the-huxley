#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int h[10], m[10], soma[10], i=1;
    
    while(i>0){
        scanf("%d\n%d", &h[i], &m[i]);
        if(h[i]==0 && m[i]==0){
            break;
        } else {
            soma[i] = h[i] + m[i];
            printf("%d\n", soma[i]);
        }
    }
	return 0;
}