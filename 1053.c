#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

int main() {
    double h, r;
    
    scanf("%lf\n", &h);
    scanf("%lf", &r);
    
    double areaL = 2 * PI * r * h;
    double areaB = PI * (r*r);
    double areaT = areaL + 2 * areaB;
    double volume = areaB * h;
    
   int areaTotal = areaT * 100;
   int volumeTotal = volume * 100;
    
    if(volumeTotal%10 == 0){
        printf("%.1lf\n", volume);
    } else {
        printf("%.2lf\n", volume);
    }
    
    if(areaTotal%10 == 0){
        printf("%.1lf\n", areaT);
    } else {
        printf("%.2lf\n", areaT);
    }
	return 0;
}