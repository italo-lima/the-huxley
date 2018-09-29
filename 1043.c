#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float quantf;
    int quanti;
    
    scanf("%f", &quantf);
    quanti = (int)quantf;
    if(quanti%2==0){
        printf("%.1f", (quanti * 3.55));
    } else {
        printf("%.2f", (quanti * 3.55));
    }
	return 0;
}