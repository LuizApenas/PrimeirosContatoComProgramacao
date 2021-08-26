#include <stdlib.h>
#include <stdio.h>

int main(){

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

    // RESULDADO
    resultado = (a + b) / 2;
    printf("Media = %f\n", resultado);
}

