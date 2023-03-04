#include <stdio.h>
#include <math.h>

int main(){
	float i, expoente, numero;
	numero = 3;
	
	for(i = 0; i<16; i++){
		expoente = pow(3, i);
		printf("%.0f elevado a %.0f e igual a: %.0f\n", numero, i, expoente);
	}
}