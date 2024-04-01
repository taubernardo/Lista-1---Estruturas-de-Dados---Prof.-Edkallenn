/*
**    Função : Verificar se o numero é feliz ou não.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: O número feliz é quando a soma dos seus algorismos ao quadrado, somados
indeterminadamentes dá o resultado de uma unidade.
*/

#include <stdio.h>
#include <stdbool.h>


int soma_quadrados_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        int digito = n % 10;
        soma = soma + digito * digito;
        n = n / 10;
    }
    return soma;
}


bool eh_numero_feliz(int n) {
    int visitados[1000] = {0}; 
    int index = 0;

    while (n != 1) {
        
        for (int i = 0; i < index; i++) {
            if (visitados[i] == n) {
                return false;  
            }
        }

        visitados[index++] = n;  

        n = soma_quadrados_digitos(n);
    }

    return true;  
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O numero deve ser maior ou igual a 1.\n");
        return 1;
    }

    if (eh_numero_feliz(n)) {
        printf("%d eh um número feliz.\n", n);
    } else {
        printf("%d nao eh um número feliz.\n", n);
    }

    return 0;
}
