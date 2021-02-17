/*Calcular o montante a pagar, no final do mês, relativo ao consumo de electricidade. 
Deve ser pedido ao utilizador o preço do KWh e a quantidade de Kwhs consumidos durante o mês.*/
#include<stdio.h>
int main()
{
	float pr, cos, total;
	printf("Introduza o preco do KWh e a quantidade de KWhs consumidos durante o mes.\n");
	scanf("%f%f", &pr, &cos);
	total=pr*cos;
	printf("O montante a pagar e %f", total);
}
