#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    if(a==0 || b==0 || c==0){
        printf("N�o");
    } else if(a>10 || b>10 || c>10){
        if(a%2==0 || b%2==0 || c%2==0){
            printf("Sim");
        } else {
            printf("N�o");
        }
    } else {
        printf("N�o");
    }
	return 0;
}