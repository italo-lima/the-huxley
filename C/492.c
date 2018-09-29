#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[7], i, somaP=0, somaG=0;
    char letra[7];

    for(i=0; i<7; i++){
        scanf("%d\n", &num[i]);
        scanf("%c", &letra[i]);

        if((letra[i]=='p')|| (letra[i]=='P')){
            somaP += (num[i] * 10);
        } else if((letra[i]=='g') || (letra[i]='G')){
            somaG +=(num[i] * 16);
        }
    }

    printf("%d\n", somaP+somaG);
    printf("%d", ((somaP+somaG)/7)*2);
	return 0;
}
