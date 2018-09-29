#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float vm, vv;
    
    scanf("%f\n%f", &vm, &vv);
    
    float m2 = vm + (vm * 0.2);
    float m5 = vm + (vm * 0.5);
    
    if((vv>vm) && (vv<=m2)){
        printf("85.13\n4");
    }else if((m2<vv) && (vv<=m5)){
        printf("127.69\n5");
    } else if(vv>m5){
        printf("574.62\n7");
    } else {
        printf("0.00\n0");
    }
	return 0;
}