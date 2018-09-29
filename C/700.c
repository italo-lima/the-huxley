#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, h=0, m=0, s=0;
    
    scanf("%d", &qtd);
    
    h = qtd/3600;
    m = (qtd%3600) /60;
    s = (qtd%3600) % 60;
    
    printf("%d h %d m %d s", h,m,s);
	return 0;
}