#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     float n1,n2,n3;
    int x;
    float media;
    scanf("%f\n%f\n%f", &n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    x=media*100;
    if(x%10!=0){
        if(media<=100 && media>=70){
            printf("A media do aluno foi %.2f e ele foi APROVADO", media);
        }else if(media<70 && media>40){
            printf("A media do aluno foi %.2f e ele foi FINAL", media);
        }else if(media<=40 && media>=0){
            printf("A media do aluno foi %.2f e ele foi REPROVADO", media);
        }else{
            printf("Media invalida");
        }
    }else{
        if(media<=100 && media>=70){
            printf("A media do aluno foi %.1f e ele foi APROVADO", media);
        }else if(media<70 && media>40){
            printf("A media do aluno foi %.1f e ele foi FINAL", media);
        }else if(media<=40 && media>=0){
            printf("A media do aluno foi %.1f e ele foi REPROVADO", media);
        }else{
            printf("Media invalida");
        }
    }
	return 0;
}