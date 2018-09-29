#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dm, h, l, p;
    
    scanf("%d", &dm);
    scanf("%d %d %d", &h, &l, &p);
    
    if((h>=dm) && (l>=dm) && (p>=dm)){
        printf("S");
    } else {
        printf("N");
    }
	return 0;
}