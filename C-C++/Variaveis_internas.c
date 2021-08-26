#include <stdio.h>
#include <stdlib.h> 

//%d = para INT
//%c = para para letras
//%f = para floats




void main(){
    // Definindo uma variavel
    int a = 5, b;

    // Imprimindo a variavel "a"
    printf("%d", a);
    
    // Concatenando 
    printf("\nOvalor da var a eh: %d", a);

    // Mudando o valor de "a" 
    a = 15;

    // Concatenando o novo valor de "a"
    printf("\nO valor da var a eh: %d\n", a);

    // Lendo valores
    scanf("%d", &b);

    // Concatenando o novo valor de "a"
    printf("\nO valor da var b eh: %d", b);

    // Pula linha
    printf("\n");

    // Imprimindo
    printf("uhuuu!\n");
    
    //Pausando 
    system("pause");

}