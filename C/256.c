#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int a[n], b[n];
    int i;
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    
    for(i=0; i<n; i++){
        printf("%d\n%d\n", a[i], b[i]);
    }
	return 0;
}