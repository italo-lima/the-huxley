#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int p[2],sg[2],gf[2],i, t1,t2,aux;
    char time1[10], time2[10];
    
     scanf("%s", time1);
        getchar();
    scanf("%d%d%d", &p[0], &sg[0], &gf[0]);
    scanf("%s", time2);
        getchar();
    scanf("%d%d%d", &p[1], &sg[1], &gf[1]);
    t1 = strlen(time1);
    t2 = strlen(time2);
    
    if(t2>t1){
        aux = t2;
        t2 = t1;
        t1 = aux;
    }

    for(i=0; i<t1; i++){
        time1[i] = tolower(time1[i]);
        time2[i] = tolower(time2[i]);
    }   
    
    if(p[0]>p[1]){
        printf("%s", time1);
    } else if(p[0]<p[1]){
        printf("%s", time2);
    } else if(p[0] == p[1] && sg[0]>sg[1]){
            printf("%s", time1);
    } else if(p[0] == p[1] && sg[0]<sg[1]){
            printf("%s", time2);
    } else if(p[0] == p[1] && sg[0]==sg[1] && gf[0]>gf[1]){
            printf("%s", time1);
    } else if(p[0] == p[1] && sg[0]==sg[1] && gf[0]<gf[1]){
            printf("%s", time2);
    } else if(p[0]==p[1] && sg[0]==sg[1] && gf[0]==gf[1]){
        printf("EMPATE");
    }
    
	return 0;
}