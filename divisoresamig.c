/*
**    Função : Encontrar divisores, soma-los, usar o número da soma e descobrir que 
a soma dos divisores dá o número anterior.
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: muita dificuldade de entender o "for" dentro do "for" e conseguir verificar baseado
na soma dos divisores, se eles eram amigáveis dentro do limite estabelecido.
*/

#include <stdio.h>

int divisores(int num) {
    int soma = 0;
    printf("Divisores de %d: ", num);
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            printf("%d ", i);
            soma = soma + i;
        }
    }
    printf("\n");
    return soma;
}

void saoAmigaveis(int num1, int num2) {
    int soma1 = divisores(num1);
    int soma2 = divisores(num2);
    
    if(soma1 == num2 && soma2 == num1) {
        printf("%d e %d são números amigáveis.\n", num1, num2);
    } else {
        printf("%d e %d não são números amigáveis.\n", num1, num2);
    }   
}

void paresAmigaveisAteN(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(divisores(i) == j && divisores(j) == i) {
                printf("%d e %d são números amigáveis.\n", i, j);
            }
        }
    }
}

int main() {
    int num1, num2, limite;

    printf("Digite dois números para verificar se são amigáveis:\n");
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);
    
    saoAmigaveis(num1, num2);

    printf("\nDigite um número limite para encontrar pares de números amigáveis: ");
    scanf("%d", &limite);
    
    paresAmigaveisAteN(limite);

    return 0;
}