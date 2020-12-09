#include <stdio.h>
 
/*

Estrutura de um loop for:

for (init; condition; increment) {
   statement(s);
}

*/

int main () {
    int a;
	
    /* execução do loop for */
    for(a = 10; a < 20; a++) {
      printf("value of a: %d\n", a);
    }
}