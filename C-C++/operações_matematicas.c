#include <stdio.h>
#include <stdlib.h>

void main(){

    // Definindo as variveis 
    int a = 6, b = 4;

    // Soma 
    printf("\nA soma de %d e %d = %d", a, b, a + b);

    // Subtração
    printf("\nA subtracao de %d e %d = %d", a, b, a - b);

    // Divisão
    printf("\nA divisao de %d e %d = %d", a, b, a / b);

    // Multiplicação
    printf("\nA multiplicacao de %d e %d = %d", a, b, a * b);

    // Resto da Divisão
    printf("\nO resto da divicao de %d e %d = %d", a, b, a % b);

    // Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    // Pular linha
    printf("\n");

    // Pausar o sitema após executar
    system("pause");
}

