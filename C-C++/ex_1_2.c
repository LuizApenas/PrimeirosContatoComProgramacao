#include <stdio.h>
#include <stdlib.h>

void main(){

    float lado01, lado02, lado03;

    printf("Digite aqui valor de lado A do triangulo ABC: "), scanf("%f", &lado01);
    printf("Digite aqui valor de lado B do triangulo ABC: "), scanf("%f", &lado02);
    printf("Digite aqui valor de lado C do triangulo ABC: "), scanf("%f", &lado03);

    if((lado01 == lado02) && (lado02 == lado03)){
        printf("\nTriangulo equilatero!\n");
    }else{
        if((lado01 == lado02) || (lado01 == lado03) || (lado02 == lado03)){
            printf("\nTriangulo Isoceles!\n");
        }else{
            printf("\nTriangulo escalano!\n");
        }
    }
}