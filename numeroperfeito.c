/*
**    Função : Verificar se o numero é perfeito ou nao
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: O número perfeito é quando a soma dos seus divisores da o próprio número.
*/


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool eh_numero_perfeito(int n) {
    int soma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma == n;
}

bool eh_numero_armstrong(int n) {
    int num_digitos = 0;
    int original = n;
    int soma = 0;

    // Contar o número de dígitos
    while (original != 0) {
        original /= 10;
        num_digitos++;
    }

    original = n;

    // Verificar se é número de Armstrong
    while (original != 0) {
        int digito = original % 10;
        soma += pow(digito, num_digitos);
        original /= 10;
    }

    return soma == n;
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O numero deve ser maior que 0.\n");
        return 1;
    }

    if (eh_numero_perfeito(n)) {
        printf("%d eh um numero perfeito.\n", n);
    } else {
        printf("%d não eh um numero perfeito.\n", n);
    }

    printf("Numeros de Armstrong entre %d e 100:\n", n);
    for (int i = n; i <= 100; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

