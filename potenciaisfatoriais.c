/*
**    Função : Calcular Fatoriais
**    Autor : Tauã Bernardo
**    Data  : 31/01/2024
**    Observações: Consegui entender o que é fatorial e aplicar na linguagem C, de fato. A grosso modo,
nada mais é do que, pegar um número inteiro e multiplicar por ele menos uma unidade até chegar na unidade.
*/

#include <stdio.h>



int potencia_fatorial_crescente(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * potencia_fatorial_crescente(n + 1);
    }
}

int potencia_fatorial_decrescente(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return potencia_fatorial_decrescente(n - 1) * n; 
    }
}

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n, resultadoCrescente, resultadoDecrescente;
    
    printf("Digite o número inteiro, o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Erro: O valor escolhido deve ser positivo.\n");
        return 1;  
    }
    
    resultadoCrescente = fatorial(n);
    resultadoDecrescente = potencia_fatorial_decrescente(n); 
    printf("O fatorial de %d é: %d\n", n, resultadoCrescente);
    printf("O fatorial decrescente de %d é: %d\n", n, resultadoDecrescente);
    
    return 0;
}
