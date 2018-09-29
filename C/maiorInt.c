#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    
    if(a == b){
        printf("%d", a);
    } else if (a > b){
        printf("%d", a);
    } else {
        printf("%d", b);
    }
	return 0;
}