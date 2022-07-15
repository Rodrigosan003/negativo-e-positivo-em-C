#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main(void) {
	int num;

	/* Recebendo os valores */
	printf("Digite um numero: \n");
	scanf("%d",&num);

	/* exibindo resultados */
	if (num>=0){
        printf("O numero e positivo");
	}
	else {
        printf("O numero e negativo");

    }
}
