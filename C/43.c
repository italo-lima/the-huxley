#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    
    scanf("%d\n%d\n%d", &num1, &num2, &num3);
    
    if((num1==num2) && (num1==num3)){
        printf("1");
    } else if((num1!=num2) && (num1!=num3)){
        printf("2");
    } else if((num1==num2) && (num1!=num3) || (num1==num3) && (num2!=num3) || (num1!=num2) && (num1==num3)){
        printf("3");
    }
	return 0;
}