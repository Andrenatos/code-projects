/*Calcular o montante a pagar, no final do m�s, relativo ao consumo de electricidade. 
Deve ser pedido ao utilizador o pre�o do KWh e a quantidade de Kwhs consumidos durante o m�s.*/
#include<stdio.h>
int main()
{
	float pr, cos, total;
	printf("Introduza o preco do KWh e a quantidade de KWhs consumidos durante o mes.\n");
	scanf("%f%f", &pr, &cos);
	total=pr*cos;
	printf("O montante a pagar e %f", total);
}
