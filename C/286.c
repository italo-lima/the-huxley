#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    if((a==b) && (b==c)){
        printf("*");
    } else if((a!=b) && (b==c)){
        printf("A");
    } else if((a!=b) && (a==c)){
        printf("B");
    } else if((a==b) && (a!=c)){
        printf("C");
    }
	return 0;
}