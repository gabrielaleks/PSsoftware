#include <stdio.h>

// A função encapsula a programação. Você se preocupa com o que é feito, não como.

// Estrutura geral de uma função:
/*

return_type function_name(parameter list, if any) {
   body of the function
}

-> Algumas funções retornam valor e esse tipo é especificado. Caso não retorne, a palavra void é usada.
-> Nome da função é sua assinatura
-> Quando uma função é chamada, você passa alguns valores dentro de parênteses. Esses são os parâmetros/argumentos. São opcionais.
-> No corpo da função é descrito seu funcionamento
*/


// Função que não recebe argumento nem devolve
void writeMessage(void) {
   printf("coe rapaziada\n");
}

// função que retorna o valor máximo de dois números
int max(int num1, int num2) {

    int result;
 
    if (num1 > num2)
        result = num1;
    else
        result = num2;
 
    return result; 
}

int main() {

    writeMessage();

    int nums = max(12,13);
    printf( "O valor máximo é: %d\n", nums);
}