#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h[3], m[3], i, cont=0;
    
    for(i=0; i<3; i++){
        scanf("%d %d", &h[i], &m[i]);
        
        if(i==0){
        if(h[0]<=11 && m[0]<=59){
            printf("v\n");
            cont++;
        } else {
            printf("f\n");
        } }
        if(i==1){
        if(h[0] + 3 == h[1] && m[0] + 12 == m[1]){
            printf("v\n");
            cont++;
        } else {
            printf("f\n");
        } }
        if(i==2){
            if(h[2]==23){
            if(h[1] + 23 == h[2] && m[2]==m[1]){
            printf("v\n");
            cont++;
        } else {
            printf("f\n");
            } 
        } else {
            if(h[1] - 1 == h[2] && m[2]==m[1]){
            printf("v\n");
            cont++;
        } else {
            printf("f\n");
        }
    }
    }
    }
    
    if(cont==3){
        printf("sucesso");
    } else {
        printf("falha");
    }
	return 0;
}