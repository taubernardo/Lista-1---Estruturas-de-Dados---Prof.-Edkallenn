/*
**    Função : Verificar se o numero é de armstrong ou não.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: Verificar se cada algorismo do numero ao cubo somados é igual ao próprio número.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int contar_digitos(int n) {
    int contador = 0;
    while (n != 0) {
        n = n / 10;
        contador++;
    }
    return contador;
}


bool eh_numero_armstrong(int n) {
    int original = n;
    int soma = 0;
    int num_digitos = contar_digitos(n);

    while (n != 0) {
        int digito = n % 10;
        soma += pow(digito, num_digitos);
        n /= 10;
    }

    return soma == original;
}

int main() {
    printf("Numeros de Armstrong entre 1 e 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
