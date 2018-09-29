#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float CalculaMulta (int vel, float vm2){
    if((vel>50) && (vel<=(50*0.1)+50)){
       return printf("230.00");
    }else if((vel>50) && (vel<=vm2)){
        return printf("340.00");
    } else if(vel>vm2){
        return printf("%.2f", (vel-vm2) * 19.28 + 192.80);
    } else {
        return printf("0.00");
    }
}

int main() {
    int vel;
    float vm2;
    scanf("%d", &vel);
    
    vm2 = (50*0.2) + 50;
    CalculaMulta(vel, vm2);
    
	return 0;
}