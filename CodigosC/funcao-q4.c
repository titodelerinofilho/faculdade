
/*Faça uma função para gerar um número aleatório evitando a repetição a cada execução. A

função deve ter como parâmetros o limite inferior e superior do intervalo em que o número deve

ser gerado. Faça um programa que receba os valores dos limites inferior e superior e utilize a

função implementada para imprimir na tela o número aleatório gerado.*/





#include <stdio.h>

#include <stdlib.h>

#include <time.h>





int gerar_numero(int limiteInferior, int limiteSuperior)

{

	return (limiteInferior + (rand() % limiteSuperior));

}





int main(int argc, char *argv[])

{

    int limiteInferior, limiteSuperior;

	srand(time(NULL));

	

	printf("Informe um número que será o limite inicial para gerar números aleatórios: ");

	scanf("%d", &limiteInferior);

	

	printf("Informe um número que será o limite final para gerar números aleatórios: ");

	scanf("%d", &limiteSuperior);

	

	printf("Numero gerado: %d\n", gerar_numero(limiteInferior, limiteSuperior));



	return 0;

}