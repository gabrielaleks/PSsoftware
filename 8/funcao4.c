#include <stdio.h>

/*
Variáveis declaradas dentro de uma função são locais.
Quando a função é chamada, as variáveis declaradas dentro da função são criadas (memória é alocada para elas).
Quando a função termina, a memória é de-alocada e as variáveis desaparecem (automatic local variables)
Podemos persistir as variáveis declarando-as como static.

*/

void myFunc(void) {
    static int num = 0;
    num++;
    printf("myFunc() has been called %d times so far\n", num);
}

int main() {
    myFunc();
    myFunc();
    myFunc();
    // printf("num = %d\n", num);  // THIS WOULD NOT WORK
}