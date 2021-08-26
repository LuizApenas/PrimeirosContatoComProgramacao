#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    // Condicional Simples(if)
    if(a ==5){
        printf("A variavel a = 5");
    }
    
    if(b ==2.5){
        printf("\nA variavel b = 2.5");
    }

    if(c == 'x'){
        printf("\nA variavel c = x");
    }

    // Numero par ou impar / Condicional Composta(if, else, else if)
    if(a % 2 == 1){
        printf("\nA variavel eh impar");
    }else{
        printf("\nA variavel eh par");
    }

    // Condicional Composta
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao ==2){
        printf("\nA opcao = 2");
    }else{
        printf("\nAopcao nao eh igual a 1 e nem 2\n");
    }

    // Pausando
    system("pause");
}