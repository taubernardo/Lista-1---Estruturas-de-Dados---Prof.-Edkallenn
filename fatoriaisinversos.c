/*
**    Função : Calcular Fatoriais Inversos
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: Aplicar a mesma coisa que nos fatoriais simples, mas agora dividindo por 1/n! e depois
somar os numeradores.
*/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}


double soma_fatoriais_inversos(int n) {
    double soma = 0.0;

    for (int i = 1; i <= n; i++) {
        soma = soma + 1.0 / fatorial(i);
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    double resultado = soma_fatoriais_inversos(n);

    printf("A soma dos fatoriais inversos ate o termo %d eh: %f\n", n, resultado);

    return 0;
}
