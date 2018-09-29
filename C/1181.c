#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int situacao[6] = {0,0,0,0,0,'\0'};
    int qtd, i, ps, pd, temp, contTA=0, contTB=0;

    scanf("%d", &qtd);

    for(i=0; i<qtd; i++){
        scanf("%d\n", &temp);
        scanf("%d\n", &ps);
        scanf("%d", &pd);

        if(temp>38){
            contTA++;
        } else {
            contTB++;
        }

        if(ps<120 && pd<80){
            situacao[0] = situacao[0] + 1;
        } else if((ps>=120 && ps<130) && (pd>=80 && pd<85)){
            situacao[1] = situacao[1] + 1;
        }else if((ps>=130 && ps<139) && (pd>=85 && pd<89)){
            situacao[2] = situacao[2] + 1;
        } else if((ps>=140 && ps<159) && (pd>=90 && pd<99)){
            situacao[3] = situacao[3] + 1;
        } else if(ps>=140 && pd<90){
            situacao[4] = situacao[4] + 1;
        } else {
            situacao[5] = situacao[5] + 1;
        }
    }

    printf("febre: %d\n", contTA);
    printf("temperatura normal: %d\n", contTB);
    printf("pressao otima: %d\n", situacao[0]);
    printf("pressao normal: %d\n", situacao[1]);
    printf("pressao limitrofe: %d\n", situacao[2]);
    printf("hipertensao: %d\n", situacao[3]);
    printf("pressao sistolica: %d\n", situacao[4]);
    printf("observacao: %d\n", situacao[5]);
	return 0;
}
