#include <stdio.h>

/* 
Operadores lógicos: &&, ||, !
*/

main() {

   int a = 5;
   int b = 20;
   int c;

   if (a && b) {
      printf("Line 1 - Condition is true\n" );
   }
	
   if (a || b) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* mudando o valor de a e b */
   a = 0;
   b = 10;
	
   if (a && b) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if (!(a && b)) {
      printf("Line 4 - Condition is true\n" );
   }
	
}