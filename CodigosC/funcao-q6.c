/*Faça uma função que converta um ângulo de graus para radianos ( = 3.141592 = 180º

). Faça

um programa que receba um ângulo em graus e imprima o seu seno, cosseno e tangente.*/



#include<stdio.h>

#include<math.h>



void converteAngulo(float angulo) {

    

    float seno, cose, radiano, PI;

    PI = 3.14159;

    

    radiano = PI * angulo / 180;

    

    printf("O seno de %.0f é: %f\n", angulo, sin(radiano));

    printf("O cosseno de %.0f é: %f\n", angulo, cos(radiano));

    printf("A tangente de %.0f é: %f\n", angulo, tan(radiano));

    

}



int main(void) {



    float angulo;

	

	printf("Qual a medida do angulo: ");

    scanf("%f", &angulo);

	

	converteAngulo(angulo);





	return 0;

}