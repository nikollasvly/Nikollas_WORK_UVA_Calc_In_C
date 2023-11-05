#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero1, numero2, funcao, resultado_geral = 0;
    int resultado;
    bool continuar_fazendo_operacoes = true;

    while (continuar_fazendo_operacoes) {
        if (resultado_geral == 0) {
            printf("Bem Vindo a calculadora em C:\n");
            printf("Por favor, digite o primeiro numero: ");
            scanf("%d", &numero1);
        } else {
            numero1 = resultado_geral;
        }

        printf("Agora digite: 1 para somar, 2 para dividir, 3 para multiplicar, 4 para subtrair, ou 0 para sair: ");
        scanf("%d", &funcao);

        if (funcao == 0) {
            continuar_fazendo_operacoes = false;
        } else {
            printf("Agora digite o segundo numero: ");
            scanf("%d", &numero2);

            switch (funcao) {
                case 1:
                    resultado = numero1 + numero2;
                    printf("A soma de %d e %d é: %d\n", numero1, numero2, resultado);
                    resultado_geral = resultado;
                    break;
                case 2:
                    resultado = numero1 / numero2;
                    printf("A divisão de %d e %d é: %d\n", numero1, numero2, resultado);
                    resultado_geral = resultado;
                    break;
                case 3:
                    resultado = numero1 * numero2;
                    printf("A multiplicação de %d e %d é: %d\n", numero1, numero2, resultado);
                    resultado_geral = resultado;
                    break;
                case 4:
                    resultado = numero1 - numero2;
                    printf("A subtração de %d e %d é: %d\n", numero1, numero2, resultado);
                    resultado_geral = resultado;
                    break;
                default:
                    printf("Operação inválida.\n");
                    break;
            }
        }
    }

    return resultado_geral;
}









