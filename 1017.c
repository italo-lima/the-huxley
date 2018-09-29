#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fibo(int n){
    if(n==1){
        return 0;
    }else if(n==2 || n==3){
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int qtd, i, final;
    
    scanf("%d", &qtd);
    
    for(i=0; i<qtd; i++){
        final = fibo(i+1);
    }
    printf("%d", final);
	return 0;
}