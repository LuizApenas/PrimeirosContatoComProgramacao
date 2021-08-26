#include <stdlib.h>
#include <stdio.h>

void main(){

    int a = 2;
    char b = 'y';

    // Codigo com IF
    if(a == 1){
        printf("opcao escolhida: 1");
    }else if(a == 2){
        printf("\nopcao escolhida: 2");
    }else if(a == 3){
        printf("\nopcao escolhida: 3");
    }else{
        printf("\nopcao invalida");
    }

    // Codigo com SWITCH
    switch(a){
        case 1:
            printf("\nopcao escolhida: 1");
            break;
        case 2:
            printf("\nopcao escolhida: 2");
            break;
        case 3:
            printf("\nopcao escolhida: 3");
            break;
        default:
            printf("\nopcao invalida");
            break;
    }   

    // SWITCH com char
    switch(b){
        case 'x':
            printf("\nA letra e 'x' ");
            break;
        default:
            printf("\nopcao invalida");
            break;
    }
    printf("\n");
}
