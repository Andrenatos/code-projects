/*Leia a cota��o do d�lar e o um valor em d�lares. Converta esse valor para Euros e mostre o resultado*/
#include<stdio.h>
int main()
{
	float cd,vd,ve;
	printf("Insira a cotacao do dolar e um valor em dolares\n");
	scanf("%f%f", &cd, &vd);
	ve = cd*vd;
	printf("O valor para Euros e %f", ve);
	
	
}
