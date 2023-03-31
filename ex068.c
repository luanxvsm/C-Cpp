#include <stdio.h>

typedef struct agenda_telefonica{
		char nome [50];
		int num;
	};

int main(){
	struct agenda_telefonica agenda1[10];
	
	int i = 0;
	
	for(i=0; i<4; i++){
		printf("Digite o nome da pessoa: ");
		scanf("%s", agenda1[i].nome);
		
		printf("Digite o numero da pessoa: ");
		scanf("%d", &agenda1[i].num);
	}
	
	for(i=0; i<4; i++){
		printf("\n %s", agenda1[i].nome);
		printf("\n %d", agenda1[i].num);
	}
}