
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quantLivros, quantAlunos;

    scanf("%d\n%d", &quantLivros, &quantAlunos);
    int media = quantAlunos/quantLivros;

    if(media<=8){
        printf("A");
    } else if(media<=12){
        printf("B");
    } else if(media<=18){
        printf("C");
    } else if(media>18){
        printf("D");
    }

	return 0;
}
