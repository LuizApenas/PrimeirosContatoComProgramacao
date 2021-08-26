#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 20;

    // AND = &&
    if(a > 5 && a < 15){
        printf("A variavel 'a' esta entre 5 e 15\n");
    }

    //OR = ||
    if(a > 5 || a > 15){
        printf("A variavel 'a' e maior que 5 ou 15\n"); 
    }
    
    // Mais de um conectivo 
    if((a > 5 && a < 15) || a == 20){
        printf("A variavel 'a' esta entre 5 e 15 ou vale 20\n");
    }

}