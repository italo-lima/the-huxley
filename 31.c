#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h, m;
    
    scanf("%d%d", &h, &m);
    printf("%d minutos.\n", (h*60) + m);
	return 0;
}