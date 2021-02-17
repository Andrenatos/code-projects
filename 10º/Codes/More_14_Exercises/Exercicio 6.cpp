/*Cálculo de um salario líquido de um funcionário. Serão fornecidos valor pago à hora, numero
de horas trabalhadas e o % de desconto para impostos.*/
#include<stdio.h>
int main()
{
	float valpag, timework, descontoimpos, payhard, payesy;
	printf("Indique o valor pago a hora, o numero de horas trabalhadas e percentagem de desconto para impostos\n");
	scanf("%f%f%f",&valpag,&timework,&descontoimpos);
	payhard= valpag*timework;
	payesy=payhard-(descontoimpos/100);
	printf("O salario liquido e %f",payesy);
}
