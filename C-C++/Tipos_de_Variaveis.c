#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 // scanf("%") - entrada de dados por teclado do usuario 

void main(){
setlocale(LC_ALL, "");
    printf("Olá\n");

    // Lendo valores Inteiros(INT)
    int a = 5; 
    printf("O valor de a é = %d\n",a);
    printf("digite um novo valor para a: "), scanf("%d", &a);
    printf("O valor mudou para %d\n", a);

    // Lendo valores quebrados(FLOAT)
    float b = 5.5; //%f para numeros quebrados 
    printf("O valor de a b = %f\n",b);
    printf("digite um novo valor para b: "), scanf("%f", &b);
    printf("O valor mudou para %f\n", b);

    // Lendo Letas
    char letra = 'l'; //%c para letas 
    printf("O valor de a c = %c\n",letra);
    printf("digite uma nova letra: "); 
    fflush(stdin); // limpar o buffer para poder ler OBS: Apenas 
    scanf("%c", &letra);
    printf("O valor mudou para %c\n", letra);
}