#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double c1,c2, hip;
    int r;
    
    scanf("%lf\n%lf", &c1, &c2);
    
    hip = pow(c1,2) + pow(c2,2);
    hip = sqrt(hip);
    
    r = round(hip * 100);
    
    if(r%10==0){
        printf("%.1lf", hip);
    } else {
        printf("%.2lf", hip);
    }
	return 0;
}