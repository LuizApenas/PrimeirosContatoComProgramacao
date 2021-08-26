#include <stdlib.h>
#include <stdio.h>

void main(){
    
    // Variaveis 
    float nota01, nota02, nota03, media;
    
    // NOTA 01
    printf("Digite a nota 01: "), scanf("%f", &nota01);

    // NOTA 02 
    printf("Digite a nota 02: "), scanf("%f", &nota02);

    // NOTA 03
    printf("Digite a nota 03: "), scanf("%f", &nota03);

    // Calculo da Media das Notas 
    media = (nota01 + nota02 + nota03) / 3;
    
    // Imprimindo a Media
    if(media > 7){
        printf("Aluno Aprovado, sua media foi %f\n", media);
    }else{
        printf("Aluno Reprovado, sua media foi %f\n", media);
    }
}
