#include <stdlib.h>
#include <stdio.h>

void main(){

    // Declarando tipos e variaveis
    float a, b, resultado;
    
    // NOTA 01
    printf("Digite a nota 01: ");
    scanf("%f", &a);
    printf("Nota 01 = %f\n", a);

    // NOTA 02 
    printf("Digite a nota 02: ");
    scanf("%f", &b);
    printf("Nota 02 = %f\n", b);

    resultado = abs(a -b);
    printf("O valor o absolotudo de %f - %f = %f", a, b, resultado);
}
