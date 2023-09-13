#include <stdio.h>
#include <stdlib.h>

double soma(double n1, double n2){

    double r = 0;
    r = n1 + n2;

    return  r; 
}

double subt(double n1, double n2){


    double r = 0;
    r = n1 - n2;

    return r;
}

double mult(double n1, double n2){

    double r = 0;
    r = n1 * n2;

    return r;
}

double dividir(double n1, double n2) {
    if (n2 == 0.0) {
        printf("Erro: Divisão por zero.\n");
        return 0.0; 
    }

    return n1 / n2;
}

int main() {
    char continuar;

    do {

        system("cls");


        double num1, num2, resultado;
        char operador;

        // Solicita ao usuário o primeiro número, o operador e o segundo número
        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);

        printf("Digite o operador (+, -, *, /): ");
        scanf(" %c", &operador); // Note o espaço antes de %c para evitar o caractere de quebra de linha pendente.

        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);

        // Realiza a operação selecionada
        switch (operador) {
            case '+':
                resultado = soma(num1,num2);
                break;
            case '-':
                resultado = subt(num1,num2);
                break;
            case '*':
                resultado = mult(num1,num2);
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro: Divisao por zero!\n");
                    resultado = 0;
                }
                break;
            default:
                printf("Operador invalido!\n");
                resultado = 0;
        }

        // Exibe o resultado
        printf("Resultado: %.2lf\n", resultado);

        // Pergunta ao usuário se deseja continuar
        printf("Deseja continuar ? (S/N) ");
        scanf(" %c", &continuar);

        if (continuar == 'N' && continuar == 'n') {
            printf("O programa sera encerrado.\n");
            
        }
            else if (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n'){
            printf("Digito incorreto!!! Programa encerrado");
            break;
        }
    } while (continuar == 'S' || continuar == 's');

    return 0;
}