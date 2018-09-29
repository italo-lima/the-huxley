#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cv, ce, cs, fv, fe, fs, pc, pf;
    
    scanf("%d %d %d %d %d %d", &cv,&ce,&cs,&fv,&fe,&fs);
    pc = (cv*3) + ce;
    pf = (fv*3) + fe;
    
    if((pc==pf) && (cs==fs)){
        printf("=");
    } else if((pc==pf) && (cs>fs)){
        printf("C");
    } else if((pc==pf) && (cs<fs)){
        printf("F");
    } else if(pc>pf){
        printf("C");
    } else {
        printf("F");
    }
    
	return 0;
}