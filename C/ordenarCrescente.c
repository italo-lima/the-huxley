#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;

    scanf("%d", &num);

    int aux = num%1000;
        num /= 1000;

        int aux2 = aux%100;
        int num2 = aux / 100;

        int aux3 = aux2%10;
        int num3 = aux2/10;

      /*  printf("%d\n", aux);
        printf("%d\n", num);
        printf("%d\n", aux2);
        printf("%d\n", num2);
        printf("%d\n", aux3);
        printf("%d\n", num3); */


        // aux3=5;num3=4;num2=3;num=2;
    if(aux3==0){
        printf("%d%d%d", num3, num2, num);
    } else {
    printf("%d%d%d%d", aux3, num3, num2, num);
    }
	return 0;
}
