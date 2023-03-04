#include <stdio.h>
#include <math.h>

int main(){
	float numero, expoente, resultado;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	printf("Digite o expoente: ");
	scanf("%f", &expoente);
	
	resultado = pow(numero, expoente);
	printf("%.0f elevado a %.0f é igual a %.0f", numero, expoente, resultado);
}