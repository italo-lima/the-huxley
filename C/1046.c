#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double TVideo, TAudio, TDados, capacidade, max=0;
    int arred;
    
    scanf("%lf\n%lf\n%lf\n%lf\n", &TVideo, &TAudio, &TDados, &capacidade);
    max = (TVideo*5.2 + TAudio*3.4 + TDados*1.5) / capacidade;
    arred = round(max*100.0);
    if(arred%10==0){
        printf("%.1f", max);
    } else {
        printf("%.2f", max);
    }
	return 0;
}