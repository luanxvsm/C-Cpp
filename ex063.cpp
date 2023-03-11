#include <stdio.h>

int main() {
    int num1 = 1, num2 = 1, soma;
    printf("Série de Fibonacci até o décimo quinto termo:\n");
    printf("%d ", num1);
    printf("%d ", num2);

    for (int i = 3; i <= 15; i++) {
        soma = num1 + num2;
        printf("%d ", soma);
        num1 = num2;
        num2 = soma;
    }

    return 0;
}