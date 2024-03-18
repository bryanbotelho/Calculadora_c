#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite o operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite um numero: ");
    scanf("%lf", &num1);

    printf("Digite outro numero: ");
    scanf("%lf", &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro! Divisao por zero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador invalido!\n");
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);
    
    return 0;
}
