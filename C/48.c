#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d", &n);
    int resto = n % 10;
    int x = (n*10) /100;
    
    if(resto!=0 && n%x==0){
        printf("SIM");
    }else {
        printf("NAO");
    }
	return 0;
}