#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b, qtd, i;
    float result=0;
    char carac;
    
    scanf("%d", &qtd);

    for(i=0; i<qtd; i++){    
    scanf("%d%c%d", &a, &carac, &b);
    if(carac=='#'){
        result = (pow(a,b)) * (pow(b,a));
        printf("%.2f\n", result);
    } else if(carac=='@'){
        result = (pow(a,b)) / (pow(b,a));
        printf("%.2f\n", result);
    } else if(carac=='&'){
        result = b * (sqrt(a)) + a * (sqrt(b));
        printf("%.2f\n", result);
    } else if(carac=='%'){
        result = b * (sqrt(a)) - a * (sqrt(b));
        printf("%.2f\n", result);
    }
    }
    
	return 0;
}