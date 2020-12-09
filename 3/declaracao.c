#include <stdio.h>

// Linguagem estaticamente tipada

int main() {
    // Declarando a variável a
    double a = 123.456;
    // Inicializando a variável b
    double b;
    b = 50.2;
    double c = 100.0;
    double d[] = {a, b, c};
    printf("a=%.3f, b=%.3f, c=%.3f, d=[%.3f, %.3f, %.3f]\n", 
                a, b, c, d[0], d[1], d[2]);
}

