/*Leia 4 (quatro) números, calcule o quadrado para cada um e some todos*/
#include<stdio.h>
int main()
{
	float n1,n2,n3,n4, n1e,n2e,n3e,n4e, ntotal;
	printf("Introduza quatro numeros\n");
	scanf("%f%f%f%f",&n1,&n2, &n3,&n4);
	n1e=n1*n1;
	n2e=n2*n2;
	n3e=n3*n3;
	n4e=n4*n4;
	printf("Os quatro numeros as quadrado e %f, %f, %f, %f\n",n1e,n2e,n3e,n4e);
	ntotal=n1e+n2e+n3e+n4e;
	printf("A soma total %f",ntotal);
}
