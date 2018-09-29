#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if(a==0 || b==0 || c==0){
        printf("Nao");
    } else if(a>10){
        if(b%2==0 || c%2==0){
            printf("Sim");
        } else {
            printf("Nao");
        }
    } else if(b>10){
        if(a%2==0 || c%2==0){
            printf("Sim");
        } else {
            printf("Nao");
        }
    } else if(c>10){
        if(a%2==0 || b%2==0){
            printf("Sim");
        } else {
            printf("Nao");
        }
    } else {
        printf("Nao");
    }
	return 0;
}