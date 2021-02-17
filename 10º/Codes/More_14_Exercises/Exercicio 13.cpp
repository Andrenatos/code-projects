/*Dado o número de alunos de uma turma e o número de rapazes, calcular a percentagem de raparigas e de rapazes da turma.*/
#include<stdio.h>
int main()
{
	float nua, nur, nug, pr, pg;
	printf("Insira a numero de alunos e de rapazes\n");
	scanf("%f%f", &nua, &nur);
	nug=nua-nur;
	printf("O numero de raparigas e %f\n", nug);
	pr=nur/nua*100;
	printf("A percentagem de rapazes e %f\n",pr);
	pg=100-pr;
	printf("A percentagem de raparigas e %f\n",pg);
	
}
