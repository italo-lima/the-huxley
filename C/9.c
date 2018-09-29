#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int j, n=1;
    char nome[100000];
    
    while(n>0){
        scanf("%d", &n);
        if(n==0){
            break;
        } else {
            scanf("%s", nome);
            getchar();
            for(j=n-1; j>=0; j--){
                printf("%c", nome[j]);
            }
            printf("\n");
        }
    }
	return 0;
}