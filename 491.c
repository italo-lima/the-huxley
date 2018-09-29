#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, m[5], s[5], totalM=0, totalS=0;
    
    for(i=0; i<5;i++){
        scanf("%d", &m[i]);
        scanf("%d", &s[i]);
        totalM = totalM + m[i];
        totalS = totalS + s[i];
    }
    totalM = (totalM*60) + totalS;
    printf("%d\n%d\n%d", (totalM/3600), ((totalM%3600)/60), ((totalM%3600)%60));
	return 0;
}