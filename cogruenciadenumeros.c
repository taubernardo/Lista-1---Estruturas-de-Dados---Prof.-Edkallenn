/*
**    Função : Programa que calcula se dois numeros sao coprimos e descobre se sao numeros de carmichael.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: 
*/

#include <stdio.h>


int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int eh_coprimo(int a, int n) {
    return mdc(a, n) == 1;
}


int verificar_numero_carmichael(int n) {
    if (n <= 2 || n % 2 == 0) {
        return printf("Nao eh numero de carmichael"); 
    }

    for (int a = 2; a < n; a++) {
        if (eh_coprimo(a, n)) {
            int res = 1;
            for (int i = 1; i <= n - 2; i++) {
                res = (res * a) % n;
            }
            if (res != 1) {
                return printf("Nao eh numero de carmichael");  
            }
        }
    }
    return printf("Eh numero de Carmichael");  
}


void encontrar_numeros_carmichael(int n) {
    printf("Números de Carmichael de 2 até %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (verificar_numero_carmichael(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O número deve ser maior ou igual a 2.\n");
        return 1;
    }

    encontrar_numeros_carmichael(n);

    return 0;
}
