/*Ler a base maior, a base menor e a altura de um trapézio. 
Em seguida calcular a sua área e escrever o resultado no monitor.
(AreaTrapezio := (Bmaior + Bmenor) * Altura /2)*/
#include<stdio.h>
int main()
{
	float bma, bme, al, at;
	printf("Introduza a base maior, a base menor e a altura do trapezio\n");
	scanf("%f%f%f", &bma, &bme, &al);
	at=(bma+bme)*al/2;
  	printf("A area do trapezio e %f",at);
}
