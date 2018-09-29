#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int x, int y) {
  if (y==0) {
    return x;
} else {
    return mdc(y,x % y);
    }
}

int main() {
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    int resultado = mdc(a,b);
    printf("%d", resultado);
	return 0;
}