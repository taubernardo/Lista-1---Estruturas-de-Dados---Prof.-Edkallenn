/*
**    Função : Verificar sequencia fibonacci máxima até o número solicitado.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: 
*/

#include <stdio.h>

void fibonacci_max(int max) {
    int a = 0, b = 1, c = 0;

    printf("{");

    while (c <= max) {
        printf("%d, ", c);

        c = a + b;
        a = b;
        b = c;
    }

    printf("-1}\n");
}

int main() {
    int max;

    printf("Digite o valor maximo para a serie de Fibonacci: ");
    scanf("%d", &max);

    fibonacci_max(max);

    return 0;
}
