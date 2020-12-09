#include <stdio.h>

/* 

Um array é um tipo de estrutura de dados que armazena uma coleção de elementos do mesmo tipo.

Declaração do array: type arrayName [arraySize];

Uma vez declarado (e memória alocada), o tamanho do array não varia
A exceção é a alocação dinâmica de memória (até agora fizemos alocação estática)

*/

int main() {

    //Declarando o array
    double notas[5] = {7.5, 5, 8, 5.6, 9};

    double nota_matematica = notas[3];

    for (int i = 0; i < 7; i++) {
        printf("Nota[%d]: %.1f\n", i, notas[i]);
    }

}