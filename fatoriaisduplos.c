/*
**    Função : Montar tabela com fatoriais normais, duplos e suas diferenças.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: Fatorial duplo consiste em diminuir sempre duas unidades a menos do número inteiro
escolhido, consequentemente, teremos um numero par sempre subtraindo o numero escolhido.

não consegui corrigir para que o valor de fatorial de 0 fosse 1, na primeira linha do array.
*/

#include <stdio.h>


int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
       return  n * fatorial(n-1);
    }
}

int fatorial_duplo(int n) {
    if(n <= 0) {
        return 1;
    } else {
        return n * fatorial_duplo(n - 2);
    }
}

int main () {

    int fatorial_normal[19];
    int fatorial_duplo_resultado[19];
    int diferenca[19];

    printf(" n | Fatorial Normal | Fatorial Duplo | Diferença\n");
    printf("___|_________________|________________|__________\n");

     for(int n = 2; n <= 20; n++) {
        fatorial_normal[n-2] = fatorial(n);
        fatorial_duplo_resultado[n-2] = fatorial_duplo(n);
        diferenca[n-2] = fatorial_duplo_resultado[n-2] - fatorial_normal[n-2];
        
        printf("%2d | %15d | %15d | %8d\n", n, fatorial_normal[n-2], fatorial_duplo_resultado[n-2], diferenca[n-2]);
    }
    
    return 0;
}

