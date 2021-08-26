#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){

    setlocale(LC_ALL, "");
    // Variaveis
    int escolha, valor01, valor02, valor03, soma, sub, div, mult, raiz;

    // op��es de escolhas matematicas
    printf("Escolha uma das opcoes abaixo:"
    "\n 1: Soma de 3 Valores "
    "\n 2: Soma de 2 Valores"
    "\n 3: Subtracao de 2 Valores"
    "\n 4: Divisao de 2 Valores"
    "\n 5: Multiplicacao de 2 Valores"
    "\n 6: Multiplicacao de 3 Valores"
    "\n 7: Raiz Quadrada de 1 Valor(OBS.: Nao pode ser negativo): ");

    // escolha de opera��o matematica 
    scanf("%d", &escolha);
    
    switch(escolha){

        case 1:
            printf("\nOpcao escolhida foi a soma de 3 valores, digite o primeiro valor: "), scanf("%d", &valor01);
            printf("Digite o segundo valor "), scanf("%d", &valor02);
            printf("Digite o terceiro valor "), scanf("%d", &valor03);
            soma = valor01 + valor02 + valor03;
            printf("O resultado da soma de %d com %d com %d � %d", valor01, valor02, valor03, soma);
            break;

        case 2:
            printf("\nOpcao escolhida foi a soma de 2 valores, digite o primeiro valor: "), scanf("%d", &valor01);
            printf("Digite o segundo valor "), scanf("%d", &valor02);
            soma = valor01 + valor02;
            printf("O resultado da soma de %d com %d = %d", valor01, valor02, soma);
            break;

        case 3:
            printf("\nOpcao escolhida foi a subtracao de 2 valores, digite o primeiro valor: "), scanf("%d", &valor01);
            printf("Digite o segundo valor "), scanf("%d", &valor02);
            sub = valor01 - valor02;
            printf("O resultado da subtracao de %d com %d = %d", valor01, valor02, sub);
            break;

        case 4:
            printf("\nOpcao escolhida foi a divisso de 2 valores, digite o primeiro valor: "), scanf("%d", &valor01);
            printf("Digite o segundo valor "), scanf("%d", &valor02);
            div = valor01 / valor02;
            printf("O resultado da divisso de %d com %d = %d", valor01, valor02, div);
            break;

        case 5:
            printf("\nOpcao escolhida foi a multiplicacao de 2 valores, digite o primeiro valor: "), scanf("%d", &valor01);
            printf("Digite o segundo valor "), scanf("%d", &valor02);
            mult = valor01 * valor02;
            printf("O resultado da multipicacao de %d com %d = %d", valor01, valor02, mult);
            break;

        case 6:
            printf("\nOpcao escolhida foi a multiplicacao de 3 valores, digite o primeiro valor: "), scanf("%d", &valor01);
            printf("Digite o segundo valor "), scanf("%d", &valor02);
            printf("Digite o terceiro valor "), scanf("%d", &valor03);
            mult = valor01 * valor02 * valor03;
            printf("O resultado da multiplicacao de %d com %d com %d = %d", valor01, valor02, valor03, mult);
            break;

        case 7:
            printf("\nOpcao escolhida foi a raiz quadrada de um valor, digite o primeiro valor: "), scanf("%d", &valor01);
                switch (valor01 > 0)
                    raiz = sqrt(valor01);
                    printf("O resultado da raiz quadrada de %d = %d", valor01, raiz);
                    break;
                default:
                    printf("O valor inserido e invalido");
                    break;
            break;   

    }
    system("pause");
}
