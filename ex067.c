#include <stdio.h>

int main(){
	int x = 15; 
	int y;
	int *p;
	
	p = &x;
	y = *p;
	
	printf("Endereco de x = %p \n", p);
	printf("Valor apontado por p = %d \n", *p);
	printf("Valor de y = %d \n", y);
	
}