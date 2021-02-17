/*Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
Formula: F = (9*C+160)/5*/
#include<stdio.h>
int main()
{
	float gc, gf;
	printf("Diga a temperatura em graus Celsius\n");
	scanf("%f",&gc);
	gf=(9*gc+160)/5;
	printf("A temperatura em graus Fahrenheit e %f\n",gf);
}
