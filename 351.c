#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mult(int a, int b){
    if(b==0){
        return 0;
    } else if(b==1){
        return a;
    } else if(b>0){
        return a + mult(a, b-1);
    } else {
        return - mult(a,-b);
    }
}

int main() {
    int a, b;
    
    scanf("%d%d", &a,&b);
    printf("%d", mult(a,b));
	return 0;
}