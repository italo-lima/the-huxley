#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int c[4], total;
    
    scanf("%d%d%d%d", &c[0], &c[1], &c[2], &c[3]);
    total = c[0] + c[1] + c[2] + c[3]; 

    printf("Candidato A: %d%%\nCandidato B: %d%%\nCandidato C: %d%%\nNulos: %d%%\n", c[0] * 100 / total, c[1] * 100 / total, c[2] * 100 / total, c[3] * 100 / total);
	
    return 0;
}