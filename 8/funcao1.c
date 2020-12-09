#include <stdio.h>

// Dividir o código em funções discretas torna o processo mais eficiente. 
// Pensem nas funções como caixas com fios de input e output.
// Tendo funções que desempenham um papel conhecido nós podemos abstrair o código:

int main() {
    loadSubjects();
    excludeSubject(12);
    lowpassFilterData();
    collectMeansWithBinSize(8);
    pval = performANOVA();
    printf("my hypothesis is correct, p < %.3f\n", pval);
}