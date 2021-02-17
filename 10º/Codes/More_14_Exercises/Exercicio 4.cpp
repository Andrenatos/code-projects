/*Pedir o tempo gasto numa viagem (em horas), o número de quilómetros percorridos e calcule a velocidade média.*/
#include<stdio.h>
int main ()
{
	float ti, qp;
	printf("Escreva o tempo gasto na viagem em horas e o numero de quilometros percorridos\n");
	scanf("%f%f",&ti, &qp);
	printf("A media da velocidade e %f",qp/ti);
}

