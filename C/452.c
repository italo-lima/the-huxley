#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    char string[12];
  int i;
  double x;
  scanf("%[^\n]s", string);
  scanf("%lf", &x);
  
  for(i = 0; i < strlen(string); i++) string[i] = tolower(string[i]);
  
  if(strcmp(string, "sua mesa") == 0) printf("%.2lf", 230*0.90*x);
  else if(strcmp(string, "meu lar") == 0) printf("%.2lf", 180*0.90*x);
  else if(strcmp(string, "o coreto") == 0) printf("%.2lf", 235*x);
  else if(strcmp(string, "mural") == 0) printf("%.2lf", 200*x);
  
	return 0;
}