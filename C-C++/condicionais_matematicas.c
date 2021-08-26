#include <stdlib.h>
#include <stdio.h>

void main(){

    int a = 5, b = 10, c = 15;
    char d = 'x';

    if(a > 2){
        printf("\n %d > 2", a);
    }

    if(c >= b){
        printf("\n %d >= %d", c, b);
    }

    if(a < 10){
        printf("\n %d < 10", a);
    }

    if(a <= 10){
        printf("\n %d <= 10", a);
    }

     if(c!= 10){
        printf("\n %d != 10", c);
    }
    
    if(d != 'a'){
        printf("\n %c != 'a'", d);
    }

    // Linha
    printf("\n");
    // Pause
    system("pause");
}