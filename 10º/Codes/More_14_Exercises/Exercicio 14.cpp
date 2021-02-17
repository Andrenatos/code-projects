/*Dados os valores referentes à população por zona de um país (NORTE, CENTRO e SUL) 
calcule a percentagem de população em cada zona relativamente ao total da população existente no país.*/
#include<stdio.h>
int main()
{
	float t, n, c, s, pn, pc, ps;
	printf("Introduza o numero de populacao do Norte, Centro e Sul respetivamente\n");
	scanf("%f%f%f", &n, &c, &s);
	t=n+c+s;
	printf("A populacao total e %f\n",t);
	pn=(n/t)*100;
	printf("A percentagem de populacao no Norte e %f\n", pn);
	pc=(c/t)*100;
	printf("A percentagem de populacao no Centro e %f\n", pc);
	ps=(s/t)*100;
	printf("A percentagem de populacao no Sul e %f\n", ps);
	
}
