#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num;
    
    scanf("%d", &num);
    
    int aux = num%10;
        num /= 10;
    
    if(aux==0){
        printf("%d", num);
    } else {
    printf("%d%d", aux, num);
    }
	return 0;
}