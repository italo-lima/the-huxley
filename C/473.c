#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int QP, QM, cont=0, i;
    float NR;
    for(i=0; ; i++){
        scanf("%d\n%d", &QP, &QM);
        scanf("%f", &NR);
        if(QP<0){
            break;
        } else if((QP>=40) && (QM>=21) && (NR>=7)){
            cont++;
        }
    }
    printf("%d", cont);
	return 0;
}