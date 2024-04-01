/*
**    Função : Encontrar numeros automorficos e no intervalo entre 2 e 1000, achar quantos existem.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: Tive que usar uma estimativa para armazenar no array. Descobri que o quadrado % 10
tem como resultado o ultimo algarismo do quadrado perfeito...
*/

#include <stdio.h>

int eh_numero_automorfico(int num) {
    int quadrado = num * num;
    int num_temp = num;
    int digitos[10];
    int quadrado_digitos[10];
    int i = 0;

    while (num_temp > 0) {
        digitos[i] = num_temp % 10;
        num_temp /= 10;
        i++;
    }

    i = 0;
    while (quadrado > 0) {
        quadrado_digitos[i] = quadrado % 10;
        quadrado /= 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (digitos[j] != quadrado_digitos[j]) {
            return printf("Nao eh automorfico"); 
        }
    }

    return printf("Eh automorfico"); 
}

void verificar_numero_automorfico() {
    int automorficos[15]; // Aproximadamente a qntidade de automorficos entre 2 e 1000
    int count = 0;

    for (int i = 2; i <= 1000; i++) {
        if (eh_numero_automorfico(i)) {
            automorficos[count++] = i;
            printf("%d é um número automórfico.\n", i);
        }
    }

    printf("\nNúmeros automórficos armazenados no array:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", automorficos[i]);
    }
    printf("\n");
}

int main() {
    printf("Verificando números automórficos entre 2 e 1000:\n");
    verificar_numero_automorfico();

    return 0;
}
