/*Ler os dois n�meros reais, calcular a multiplica��o entre eles, somar 80 ao resultado e escrev�-lo no monitor.*/
#include<stdio.h>
int main() 
{
	float n1, n2, n3, n4;
	printf("Introduza dois numeros reais que sera realizada uma multiplicacao entre eles\n");
	scanf("%f%f", &n1,&n2);
	n3=n1*n2;
	printf("Agora sera somado 80 ao produto\n");
	n4=80+n3;
	printf("Aqui esta o resultado final %f\n",n4);
}
