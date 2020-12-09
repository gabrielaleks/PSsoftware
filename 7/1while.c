#include <stdio.h>
 
// O loop é executado enquanto a condição dentro dele for verdadeira

// int main () {

//     /* declaração da variável */
//     int a = 10;

//     /* execução do loop while */
//     while(a <= 20) {
//         printf("value of a: %d\n", a);
//         a++;
//     }

// }

// Uma variação é o do...while...



int main () {

    int a = 10;

    do {
        printf("value of a: %d\n", a);
        a = a + 1;
    } while (a < 20);
}

