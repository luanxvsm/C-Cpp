#include <stdio.h>
#include <math.h>

int main(){
    float graos,tabuleiro,resultado;
    graos = 1;
    tabuleiro = 0;
    resultado = 0;

    while(tabuleiro< 63){
        resultado = resultado + graos;
        graos = graos * 2;
        tabuleiro++;
        printf("%.0f\n \n",resultado);
    }
}