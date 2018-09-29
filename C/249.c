#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char p1[100], p2[100];
    
    gets(p1);
    gets(p2);
    
    strcat(p1, p2);
    printf("%s", p1);
	return 0;
}