#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, reverse =0;
    
    scanf("%d", &num);
    
    while(num!=0){
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }
    
    printf("%d", reverse);
	return 0;
}