#include <stdio.h>

/*
Variáveis declaradas dentro de uma função são locais (não podem ser acessadas de fora)
Escopo é a área onde uma entidade (variável, constante, função) é reconhecida

*/

float globalVar = 3.14;

void myFunc(void) {
    int restrictedVar = 8;
    printf("my favourite number is %d\n", restrictedVar);
    printf("my favourite float is %.2f\n", globalVar);
//  printf("my favourite letter is $c\n", restrictedChar); // não funciona
}

int main() {
    char restrictedChar = 'x';
    printf("my favourite letter is %c\n", restrictedChar);
    myFunc();
    printf("my favourite float is %.2f\n", globalVar);
//  printf("my favourite number is %d", restrictedVar); // não funciona
    return 0;
}