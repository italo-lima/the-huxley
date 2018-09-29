#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float velKMH(float v, float a, float t){
    
    float vel = v + (a * t);
    vel = vel * 3.6;
    
    return vel;
}

int main() {
    int i;
    float v,a,t, rest[3];
    
    scanf("%f", &v);
    scanf("%f", &a);
    scanf("%f", &t);
    rest[0] = velKMH(v,a,t);
   float menor = rest[0];
    
    for(i=1; i<=2; i++){
        scanf("%f", &v);
        scanf("%f", &a);
        scanf("%f", &t);
        rest[i] = velKMH(v,a,t);
        if(menor>rest[i]){
            menor = rest[i];
        }
    }
    
    printf("%.1f", menor);
	return 0;
}